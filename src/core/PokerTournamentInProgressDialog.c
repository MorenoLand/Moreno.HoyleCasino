#include "protos.h"

void f_0051cc80(void) /* PokerTournamentInProgressDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051cc80);
    /* 0051cc80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc81: mov ebp, esp */ r_ebp = r_esp;
    /* 0051cc83: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc84: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051cc87: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cc8b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051cc8e: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x51cc93u); f_005f71f0();
    /* 0051cc93: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051cc96: mov dword ptr [eax], 0x6c2524 */ W32((u32)(r_eax), 0x6c2524u);
    /* 0051cc9c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051cc9f: mov dword ptr [ecx + 0x1bc], 0xffffffff */ W32((u32)(r_ecx+0x1bcu), 0xffffffffu);
    /* 0051cca9: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051ccac: mov esp, ebp */ r_esp = r_ebp;
    /* 0051ccae: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051ccaf: ret  */ FN_RET(0x0051cc80); r_esp += 4; return;
}

void f_0051cd00(void) /* PokerTournamentInProgressDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051cd00);
    /* 0051cd00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051cd01: mov ebp, esp */ r_ebp = r_esp;
    /* 0051cd03: sub esp, 0x158 */ {  u32 a = r_esp; u32 b = 0x158u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051cd09: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0051cd0e: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0051cd10: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0051cd13: mov dword ptr [ebp - 0x154], ecx */ W32((u32)(r_ebp+0xfffffeacu), r_ecx);
    /* 0051cd19: mov dword ptr [ebp - 0x3c], 0x14 */ W32((u32)(r_ebp+0xffffffc4u), 0x14u);
    /* 0051cd20: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051cd26: mov cl, byte ptr [eax + 0x1c0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1c0u))) & 0xffu);
    /* 0051cd2c: mov byte ptr [ebp - 0x141], cl */ W8((u32)(r_ebp+0xfffffebfu), (u8)r_ecx);
    /* 0051cd32: movzx edx, byte ptr [ebp - 0x141] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffebfu));
    /* 0051cd39: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051cd3b: je 0x51cdb7 */ if (fZ) goto L_0051cdb7;
L_0051cd3d:; BB(0x0051cd3d);
    /* 0051cd3d: mov eax, dword ptr [0x791364] */ r_eax = R32((u32)(0x791364u));
    /* 0051cd42: mov ecx, dword ptr [eax + 0xf8] */ r_ecx = R32((u32)(r_eax+0xf8u));
    /* 0051cd48: mov dword ptr [ebp - 0x148], ecx */ W32((u32)(r_ebp+0xfffffeb8u), r_ecx);
    /* 0051cd4e: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051cd54: mov eax, dword ptr [ebp - 0x148] */ r_eax = R32((u32)(r_ebp+0xfffffeb8u));
    /* 0051cd5a: mov dword ptr [edx + 0x1c4], eax */ W32((u32)(r_edx+0x1c4u), r_eax);
    /* 0051cd60: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051cd66: mov edx, dword ptr [ecx + 0xfc] */ r_edx = R32((u32)(r_ecx+0xfcu));
    /* 0051cd6c: mov dword ptr [ebp - 0x14c], edx */ W32((u32)(r_ebp+0xfffffeb4u), r_edx);
    /* 0051cd72: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051cd78: mov ecx, dword ptr [ebp - 0x14c] */ r_ecx = R32((u32)(r_ebp+0xfffffeb4u));
    /* 0051cd7e: mov dword ptr [eax + 0x1c8], ecx */ W32((u32)(r_eax+0x1c8u), r_ecx);
    /* 0051cd84: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051cd8a: call 0x480ee0 */ r_esp -= 4; W32(r_esp, 0x51cd8fu); f_00480ee0();
    /* 0051cd8f: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051cd95: mov dword ptr [edx + 0x1cc], eax */ W32((u32)(r_edx+0x1ccu), r_eax);
    /* 0051cd9b: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051cda1: call 0x47a510 */ r_esp -= 4; W32(r_esp, 0x51cda6u); f_0047a510();
    /* 0051cda6: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051cdac: mov dword ptr [ecx + 0x1d0], eax */ W32((u32)(r_ecx+0x1d0u), r_eax);
    /* 0051cdb2: jmp 0x51ce37 */ goto L_0051ce37;
L_0051cdb7:; BB(0x0051cdb7);
    /* 0051cdb7: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051cdbd: call 0x51e5f0 */ r_esp -= 4; W32(r_esp, 0x51cdc2u); f_0051e5f0();
    /* 0051cdc2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051cdc3: call 0x520690 */ r_esp -= 4; W32(r_esp, 0x51cdc8u); f_00520690();
    /* 0051cdc8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051cdcb: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051cdd1: mov dword ptr [edx + 0x1c4], eax */ W32((u32)(r_edx+0x1c4u), r_eax);
    /* 0051cdd7: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051cddd: call 0x51e5f0 */ r_esp -= 4; W32(r_esp, 0x51cde2u); f_0051e5f0();
    /* 0051cde2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051cde3: call 0x5206b0 */ r_esp -= 4; W32(r_esp, 0x51cde8u); f_005206b0();
    /* 0051cde8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051cdeb: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051cdf1: mov dword ptr [ecx + 0x1c8], eax */ W32((u32)(r_ecx+0x1c8u), r_eax);
    /* 0051cdf7: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051cdfd: call 0x51e5f0 */ r_esp -= 4; W32(r_esp, 0x51ce02u); f_0051e5f0();
    /* 0051ce02: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce03: call 0x5206d0 */ r_esp -= 4; W32(r_esp, 0x51ce08u); f_005206d0();
    /* 0051ce08: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ce0b: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051ce11: mov dword ptr [edx + 0x1cc], eax */ W32((u32)(r_edx+0x1ccu), r_eax);
    /* 0051ce17: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051ce1d: call 0x51e5f0 */ r_esp -= 4; W32(r_esp, 0x51ce22u); f_0051e5f0();
    /* 0051ce22: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce23: call 0x520710 */ r_esp -= 4; W32(r_esp, 0x51ce28u); f_00520710();
    /* 0051ce28: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ce2b: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051ce31: mov dword ptr [ecx + 0x1d0], eax */ W32((u32)(r_ecx+0x1d0u), r_eax);
L_0051ce37:; BB(0x0051ce37);
    /* 0051ce37: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce39: push 0x30e7ef */ { u32 v = 0x30e7efu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce3e: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051ce44: call 0x5f83d0 */ r_esp -= 4; W32(r_esp, 0x51ce49u); f_005f83d0();
    /* 0051ce49: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051ce4f: mov byte ptr [edx + 0x1b8], 1 */ W8((u32)(r_edx+0x1b8u), 0x1u);
    /* 0051ce56: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce58: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce5a: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce5c: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce5e: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce60: push 0x6c1428 */ { u32 v = 0x6c1428u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce65: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51ce6au); f_00630f40();
    /* 0051ce6a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051ce6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce6e: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce70: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051ce73: add eax, 0x1a1 */ {  u32 a = r_eax; u32 b = 0x1a1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051ce78: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce79: push 0x18c */ { u32 v = 0x18cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce7e: push 0x30d4e5 */ { u32 v = 0x30d4e5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce83: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce87: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051ce8d: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51ce92u); f_005f9de0();
    /* 0051ce92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce94: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce96: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce98: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce9a: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ce9c: push 0x6b30a8 */ { u32 v = 0x6b30a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cea1: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51cea6u); f_00630f40();
    /* 0051cea6: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051cea9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ceaa: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ceac: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051ceaf: add ecx, 0x1a1 */ {  u32 a = r_ecx; u32 b = 0x1a1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051ceb5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ceb6: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ceb8: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cebd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cebf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cec1: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051cec7: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51ceccu); f_005f9de0();
    /* 0051cecc: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051ced2: mov al, byte ptr [edx + 0x1c0] */ r_eax = (r_eax & 0xffffff00u) | ((R8((u32)(r_edx+0x1c0u))) & 0xffu);
    /* 0051ced8: mov byte ptr [ebp - 0x14d], al */ W8((u32)(r_ebp+0xfffffeb3u), (u8)r_eax);
    /* 0051cede: movzx ecx, byte ptr [ebp - 0x14d] */ r_ecx = (u32)R8((u32)(r_ebp+0xfffffeb3u));
    /* 0051cee5: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051cee7: jne 0x51cf26 */ if (!fZ) goto L_0051cf26;
L_0051cee9:; BB(0x0051cee9);
    /* 0051cee9: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ceeb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ceed: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0051ceef: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cef1: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cef3: push 0x6c2318 */ { u32 v = 0x6c2318u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cef8: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51cefdu); f_00630f40();
    /* 0051cefd: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051cf00: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf01: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf03: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051cf06: add edx, 0x1a1 */ {  u32 a = r_edx; u32 b = 0x1a1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051cf0c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf0d: push 0x204 */ { u32 v = 0x204u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf12: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf17: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf19: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf1b: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051cf21: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51cf26u); f_005f9de0();
L_0051cf26:; BB(0x0051cf26);
    /* 0051cf26: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051cf2c: mov cl, byte ptr [eax + 0x1c0] */ r_ecx = (r_ecx & 0xffffff00u) | ((R8((u32)(r_eax+0x1c0u))) & 0xffu);
    /* 0051cf32: mov byte ptr [ebp - 0x14e], cl */ W8((u32)(r_ebp+0xfffffeb2u), (u8)r_ecx);
    /* 0051cf38: movzx edx, byte ptr [ebp - 0x14e] */ r_edx = (u32)R8((u32)(r_ebp+0xfffffeb2u));
    /* 0051cf3f: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051cf41: je 0x51cf92 */ if (fZ) goto L_0051cf92;
L_0051cf43:; BB(0x0051cf43);
    /* 0051cf43: mov ecx, dword ptr [0x791364] */ r_ecx = R32((u32)(0x791364u));
    /* 0051cf49: call 0x480f80 */ r_esp -= 4; W32(r_esp, 0x51cf4eu); f_00480f80();
    /* 0051cf4e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0051cf51: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0051cf53: jne 0x51cf92 */ if (!fZ) goto L_0051cf92;
L_0051cf55:; BB(0x0051cf55);
    /* 0051cf55: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf57: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf59: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf5b: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf5d: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf5f: push 0x6bcdd8 */ { u32 v = 0x6bcdd8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf64: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51cf69u); f_00630f40();
    /* 0051cf69: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051cf6c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf6d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf6f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051cf72: add ecx, 0x1a1 */ {  u32 a = r_ecx; u32 b = 0x1a1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051cf78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf79: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf7e: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf83: push 8 */ { u32 v = 0x8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf85: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf87: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051cf8d: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51cf92u); f_005f9de0();
L_0051cf92:; BB(0x0051cf92);
    /* 0051cf92: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf94: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf96: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf98: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf9a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cf9c: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfa1: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfa3: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051cfa6: add edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051cfa9: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfaa: push 0xa2 */ { u32 v = 0xa2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfaf: push 0x3ff */ { u32 v = 0x3ffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfb4: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfb8: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051cfbe: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51cfc3u); f_005f9de0();
    /* 0051cfc3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfc5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfc9: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfcb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfcd: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfd2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfd4: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051cfd7: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051cfda: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfdb: push 0xe8 */ { u32 v = 0xe8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfe0: push 0x400 */ { u32 v = 0x400u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfe5: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfe7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cfe9: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051cfef: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51cff4u); f_005f9de0();
    /* 0051cff4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051cff6: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cff8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cffa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cffc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051cffe: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d003: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d005: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d008: add ecx, 0x19 */ {  u32 a = r_ecx; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d00b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d00c: push 0x130 */ { u32 v = 0x130u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d011: push 0x401 */ { u32 v = 0x401u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d016: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d018: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d01a: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d020: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51d025u); f_005f9de0();
    /* 0051d025: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d027: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d029: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d02b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d02d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d02f: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d034: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d036: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d039: add edx, 0x19 */ {  u32 a = r_edx; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051d03c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d03d: push 0x17c */ { u32 v = 0x17cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d042: push 0x402 */ { u32 v = 0x402u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d047: push 6 */ { u32 v = 0x6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d049: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d04b: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d051: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51d056u); f_005f9de0();
    /* 0051d056: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d058: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d05a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d05c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d05e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d060: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d065: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d067: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d06a: add eax, 0x19 */ {  u32 a = r_eax; u32 b = 0x19u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051d06d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d06e: push 0x1c8 */ { u32 v = 0x1c8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d073: push 0x403 */ { u32 v = 0x403u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d078: push 7 */ { u32 v = 0x7u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d07a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d07c: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d082: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x51d087u); f_005f9de0();
    /* 0051d087: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d089: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d08e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d090: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d092: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d095: add ecx, 0x76 */ {  u32 a = r_ecx; u32 b = 0x76u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d098: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d099: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d09b: push 0x30e7ec */ { u32 v = 0x30e7ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0a0: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0a4: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d0aa: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x51d0afu); f_005f9ce0();
    /* 0051d0af: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0b1: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0b6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0b8: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0ba: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d0bd: add edx, 0x1a */ {  u32 a = r_edx; u32 b = 0x1au; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051d0c0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0c1: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0c3: push 0x30e7ee */ { u32 v = 0x30e7eeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0c8: push 0xb */ { u32 v = 0xbu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0ca: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0cc: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d0d2: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x51d0d7u); f_005f9ce0();
    /* 0051d0d7: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0d9: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0de: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0e0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0e2: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d0e5: add eax, 0x46 */ {  u32 a = r_eax; u32 b = 0x46u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051d0e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0e9: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0eb: push 0x30e7ee */ { u32 v = 0x30e7eeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0f0: push 0xc */ { u32 v = 0xcu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0f2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d0f4: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d0fa: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x51d0ffu); f_005f9ce0();
    /* 0051d0ff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d101: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d106: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d108: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d10a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d10d: add ecx, 0x195 */ {  u32 a = r_ecx; u32 b = 0x195u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d113: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d114: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d116: push 0x30e7ee */ { u32 v = 0x30e7eeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d11b: push 0xd */ { u32 v = 0xdu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d11d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d11f: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d125: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x51d12au); f_005f9ce0();
    /* 0051d12a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d12c: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d131: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d133: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0051d135: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d138: add edx, 0x76 */ {  u32 a = r_edx; u32 b = 0x76u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051d13b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d13c: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d13e: push 0x30e7ed */ { u32 v = 0x30e7edu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d143: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d145: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d147: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d14d: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x51d152u); f_005f9ce0();
    /* 0051d152: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d154: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d159: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d15b: push 0xa */ { u32 v = 0xau; r_esp -= 4; W32(r_esp, v); }
    /* 0051d15d: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d160: add eax, 0xf8 */ {  u32 a = r_eax; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051d165: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d166: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051d168: push 0x30e7f1 */ { u32 v = 0x30e7f1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d16d: push 0xf */ { u32 v = 0xfu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d16f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d171: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d177: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x51d17cu); f_005f9ce0();
    /* 0051d17c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d17e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d180: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d182: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d185: add ecx, 0x28 */ {  u32 a = r_ecx; u32 b = 0x28u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d188: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d189: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d18b: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d18d: push 0x96 */ { u32 v = 0x96u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d192: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d194: push 0x6c22f4 */ { u32 v = 0x6c22f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d199: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d19eu); f_00630f40();
    /* 0051d19e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d1a1: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d1a2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d1a4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d1a6: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d1ac: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d1b1u); f_005fa5b0();
    /* 0051d1b1: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0051d1b4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d1b5: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d1bb: mov ecx, dword ptr [eax + 0x1d0] */ r_ecx = R32((u32)(r_eax+0x1d0u));
    /* 0051d1c1: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d1c2: call 0x6311e0 */ r_esp -= 4; W32(r_esp, 0x51d1c7u); f_006311e0();
    /* 0051d1c7: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d1ca: lea edx, [ebp - 0x38] */ r_edx = (u32)(r_ebp+0xffffffc8u);
    /* 0051d1cd: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d1ce: push 0x6c25f4 */ { u32 v = 0x6c25f4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d1d3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d1d8u); f_00630f40();
    /* 0051d1d8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d1db: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d1dc: lea eax, [ebp - 0x140] */ r_eax = (u32)(r_ebp+0xfffffec0u);
    /* 0051d1e2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d1e3: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51d1e9u); call_ind(t); }
    /* 0051d1e9: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d1ec: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d1ee: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d1f0: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d1f2: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d1f5: add ecx, 0x4c */ {  u32 a = r_ecx; u32 b = 0x4cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d1f8: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d1f9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d1fb: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d1fd: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d202: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d204: lea edx, [ebp - 0x140] */ r_edx = (u32)(r_ebp+0xfffffec0u);
    /* 0051d20a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d20b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d20d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d20f: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d215: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d21au); f_005fa5b0();
    /* 0051d21a: mov eax, dword ptr [ebp - 0x154] */ r_eax = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d220: mov ecx, dword ptr [eax + 0x1cc] */ r_ecx = R32((u32)(r_eax+0x1ccu));
    /* 0051d226: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d227: mov edx, dword ptr [ebp - 0x154] */ r_edx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d22d: mov eax, dword ptr [edx + 0x1c8] */ r_eax = R32((u32)(r_edx+0x1c8u));
    /* 0051d233: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d234: push 0x6c25c0 */ { u32 v = 0x6c25c0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d239: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d23eu); f_00630f40();
    /* 0051d23e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d241: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d242: lea ecx, [ebp - 0x140] */ r_ecx = (u32)(r_ebp+0xfffffec0u);
    /* 0051d248: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d249: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51d24fu); call_ind(t); }
    /* 0051d24f: add esp, 0x10 */ {  u32 a = r_esp; u32 b = 0x10u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d252: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d254: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d256: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d258: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d25b: add edx, 0x60 */ {  u32 a = r_edx; u32 b = 0x60u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051d25e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d25f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d261: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d263: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d268: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d26a: lea eax, [ebp - 0x140] */ r_eax = (u32)(r_ebp+0xfffffec0u);
    /* 0051d270: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d271: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d273: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d275: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d27b: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d280u); f_005fa5b0();
    /* 0051d280: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d286: call 0x51ccd0 */ r_esp -= 4; W32(r_esp, 0x51d28bu); f_0051ccd0();
    /* 0051d28b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d28c: push 0x6c2594 */ { u32 v = 0x6c2594u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d291: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d296u); f_00630f40();
    /* 0051d296: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d299: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d29a: lea ecx, [ebp - 0x140] */ r_ecx = (u32)(r_ebp+0xfffffec0u);
    /* 0051d2a0: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2a1: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51d2a7u); call_ind(t); }
    /* 0051d2a7: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d2aa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2ac: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2ae: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2b0: push 0xe */ { u32 v = 0xeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2b2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2b4: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2b6: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2bb: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2bd: lea edx, [ebp - 0x140] */ r_edx = (u32)(r_ebp+0xfffffec0u);
    /* 0051d2c3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2c4: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2c6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2c8: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d2ce: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d2d3u); f_005fa5b0();
    /* 0051d2d3: push 0x6c2288 */ { u32 v = 0x6c2288u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2d8: lea eax, [ebp - 0x140] */ r_eax = (u32)(r_ebp+0xfffffec0u);
    /* 0051d2de: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2df: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51d2e5u); call_ind(t); }
    /* 0051d2e5: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d2e8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2ea: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2ec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2ee: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d2f1: add ecx, 0x16a */ {  u32 a = r_ecx; u32 b = 0x16au; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d2f7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2f8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2fa: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d2fc: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d301: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d303: lea edx, [ebp - 0x140] */ r_edx = (u32)(r_ebp+0xfffffec0u);
    /* 0051d309: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d30a: push 3 */ { u32 v = 0x3u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d30c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d30e: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d314: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d319u); f_005fa5b0();
    /* 0051d319: push 0x6c225c */ { u32 v = 0x6c225cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d31e: lea eax, [ebp - 0x140] */ r_eax = (u32)(r_ebp+0xfffffec0u);
    /* 0051d324: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d325: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x51d32bu); call_ind(t); }
    /* 0051d32b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d32e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d330: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d332: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d334: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d337: add ecx, 0x17e */ {  u32 a = r_ecx; u32 b = 0x17eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d33d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d33e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d340: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d342: push 0x280 */ { u32 v = 0x280u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d347: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d349: lea edx, [ebp - 0x140] */ r_edx = (u32)(r_ebp+0xfffffec0u);
    /* 0051d34f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d350: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d352: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d354: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d35a: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d35fu); f_005fa5b0();
    /* 0051d35f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d361: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d363: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d365: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d368: add eax, 0x78 */ {  u32 a = r_eax; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051d36b: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d36c: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051d36e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d370: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d375: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d377: push 0x6c2240 */ { u32 v = 0x6c2240u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d37c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d381u); f_00630f40();
    /* 0051d381: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d384: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d385: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d387: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d389: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d38f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d394u); f_005fa5b0();
    /* 0051d394: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d397: sub ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d39a: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0051d39d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d39f: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3a1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3a3: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d3a6: add edx, 0x9e */ {  u32 a = r_edx; u32 b = 0x9eu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051d3ac: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3ad: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3af: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3b1: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3b6: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3b8: push 0x6c171c */ { u32 v = 0x6c171cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3bd: push 0x15 */ { u32 v = 0x15u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3bf: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3c1: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d3c7: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d3ccu); f_005fa5b0();
    /* 0051d3cc: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3ce: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3d0: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3d2: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d3d5: add eax, 0xb2 */ {  u32 a = r_eax; u32 b = 0xb2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051d3da: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3db: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3dd: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3df: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3e4: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3e6: push 0x6c2224 */ { u32 v = 0x6c2224u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3eb: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d3f0u); f_00630f40();
    /* 0051d3f0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d3f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3f4: push 0x16 */ { u32 v = 0x16u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3f6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d3f8: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d3fe: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d403u); f_005fa5b0();
    /* 0051d403: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d406: sub ecx, 0xa */ {  u32 a = r_ecx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d409: mov dword ptr [ebp - 0x3c], ecx */ W32((u32)(r_ebp+0xffffffc4u), r_ecx);
    /* 0051d40c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d40e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d410: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d412: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d415: add edx, 0xd0 */ {  u32 a = r_edx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051d41b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d41c: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051d41e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d420: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d425: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d427: push 0x6c2204 */ { u32 v = 0x6c2204u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d42c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d431u); f_00630f40();
    /* 0051d431: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d434: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d435: push 0x17 */ { u32 v = 0x17u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d437: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d439: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d43f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d444u); f_005fa5b0();
    /* 0051d444: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d446: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d448: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d44a: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d44d: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051d452: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d453: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051d455: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d457: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d459: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d45b: push 0x6c21e8 */ { u32 v = 0x6c21e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d460: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d465u); f_00630f40();
    /* 0051d465: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d468: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d469: push 0x18 */ { u32 v = 0x18u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d46b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d46d: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d473: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d478u); f_005fa5b0();
    /* 0051d478: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d47a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d47c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d47e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d481: add ecx, 0xe4 */ {  u32 a = r_ecx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d487: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d488: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d48a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d48c: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d48e: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d490: push 0x6c21cc */ { u32 v = 0x6c21ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d495: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d49au); f_00630f40();
    /* 0051d49a: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d49d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d49e: push 0x19 */ { u32 v = 0x19u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4a0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4a2: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d4a8: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d4adu); f_005fa5b0();
    /* 0051d4ad: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4af: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4b1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4b3: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d4b6: add edx, 0xe4 */ {  u32 a = r_edx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051d4bc: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4bd: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4c2: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4c4: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4c6: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4c8: push 0x6c21b0 */ { u32 v = 0x6c21b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4cd: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d4d2u); f_00630f40();
    /* 0051d4d2: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d4d5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4d6: push 0x1a */ { u32 v = 0x1au; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4d8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4da: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d4e0: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d4e5u); f_005fa5b0();
    /* 0051d4e5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4e7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4e9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4eb: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d4ee: add eax, 0xf8 */ {  u32 a = r_eax; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051d4f3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4f4: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4f6: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4f8: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4fa: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d4fc: push 0x6c21ac */ { u32 v = 0x6c21acu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d501: push 0x1b */ { u32 v = 0x1bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d503: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d505: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d50b: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d510u); f_005fa5b0();
    /* 0051d510: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d512: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d514: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d516: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d519: add ecx, 0xf8 */ {  u32 a = r_ecx; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d51f: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d520: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d522: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d524: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d526: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d528: push 0x6c21a8 */ { u32 v = 0x6c21a8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d52d: push 0x1c */ { u32 v = 0x1cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d52f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d531: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d537: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d53cu); f_005fa5b0();
    /* 0051d53c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d53e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d540: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d542: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d545: add edx, 0xf8 */ {  u32 a = r_edx; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051d54b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d54c: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d551: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d553: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d555: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d557: push 0x6c21a4 */ { u32 v = 0x6c21a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d55c: push 0x1d */ { u32 v = 0x1du; r_esp -= 4; W32(r_esp, v); }
    /* 0051d55e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d560: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d566: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d56bu); f_005fa5b0();
    /* 0051d56b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d56d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d56f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d571: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d574: add eax, 0x10c */ {  u32 a = r_eax; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051d579: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d57a: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051d57c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d57e: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d580: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d582: push 0x6c21a0 */ { u32 v = 0x6c21a0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d587: push 0x1e */ { u32 v = 0x1eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d589: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d58b: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d591: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d596u); f_005fa5b0();
    /* 0051d596: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d598: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d59a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d59c: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d59f: add ecx, 0x10c */ {  u32 a = r_ecx; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d5a5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5a6: push 0x65 */ { u32 v = 0x65u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5a8: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5aa: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5ac: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5ae: push 0x6c219c */ { u32 v = 0x6c219cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5b3: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5b7: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d5bd: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d5c2u); f_005fa5b0();
    /* 0051d5c2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5c4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5c6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5c8: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d5cb: add edx, 0x10c */ {  u32 a = r_edx; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051d5d1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5d2: push 0x9c */ { u32 v = 0x9cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5d7: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5d9: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5db: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5dd: push 0x6c2198 */ { u32 v = 0x6c2198u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5e2: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5e4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5e6: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d5ec: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d5f1u); f_005fa5b0();
    /* 0051d5f1: mov dword ptr [ebp - 0x3c], 0x1b */ W32((u32)(r_ebp+0xffffffc4u), 0x1bu);
    /* 0051d5f8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5fa: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5fc: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d5fe: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d601: add eax, 0x12f */ {  u32 a = r_eax; u32 b = 0x12fu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051d606: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d607: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051d609: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d60b: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d610: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d612: push 0x6c2178 */ { u32 v = 0x6c2178u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d617: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d61cu); f_00630f40();
    /* 0051d61c: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d61f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d620: push 0x21 */ { u32 v = 0x21u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d622: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d624: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d62a: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d62fu); f_005fa5b0();
    /* 0051d62f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d631: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d633: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d635: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d638: add ecx, 0x143 */ {  u32 a = r_ecx; u32 b = 0x143u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d63e: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d63f: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051d641: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d643: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d648: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d64a: push 0x6c215c */ { u32 v = 0x6c215cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d64f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d654u); f_00630f40();
    /* 0051d654: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d657: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d658: push 0x22 */ { u32 v = 0x22u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d65a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d65c: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d662: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d667u); f_005fa5b0();
    /* 0051d667: mov dword ptr [ebp - 0x3c], 0x14 */ W32((u32)(r_ebp+0xffffffc4u), 0x14u);
    /* 0051d66e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d670: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d672: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d674: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d677: add edx, 0x78 */ {  u32 a = r_edx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051d67a: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d67b: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d680: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d682: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d687: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d689: push 0x6c2140 */ { u32 v = 0x6c2140u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d68e: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d693u); f_00630f40();
    /* 0051d693: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d696: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d697: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d699: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d69b: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d6a1: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d6a6u); f_005fa5b0();
    /* 0051d6a6: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d6a9: sub eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051d6ac: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0051d6af: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6b1: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6b3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6b5: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d6b8: add ecx, 0x9e */ {  u32 a = r_ecx; u32 b = 0x9eu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d6be: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6bf: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6c4: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6c6: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6cb: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6cd: push 0x6c171c */ { u32 v = 0x6c171cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6d2: push 0x29 */ { u32 v = 0x29u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6d4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6d6: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d6dc: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d6e1u); f_005fa5b0();
    /* 0051d6e1: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6e3: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6e5: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6e7: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d6ea: add edx, 0xb2 */ {  u32 a = r_edx; u32 b = 0xb2u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051d6f0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6f1: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6f6: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6f8: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6fd: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d6ff: push 0x6c2124 */ { u32 v = 0x6c2124u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d704: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d709u); f_00630f40();
    /* 0051d709: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d70c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d70d: push 0x2a */ { u32 v = 0x2au; r_esp -= 4; W32(r_esp, v); }
    /* 0051d70f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d711: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d717: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d71cu); f_005fa5b0();
    /* 0051d71c: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d71f: sub eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_eax = r;  }
    /* 0051d722: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0051d725: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d727: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d729: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d72b: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d72e: add ecx, 0xd0 */ {  u32 a = r_ecx; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d734: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d735: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d73a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d73c: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d741: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d743: push 0x6c2204 */ { u32 v = 0x6c2204u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d748: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d74du); f_00630f40();
    /* 0051d74d: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d750: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d751: push 0x2b */ { u32 v = 0x2bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d753: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d755: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d75b: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d760u); f_005fa5b0();
    /* 0051d760: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d762: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d764: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d766: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d769: add edx, 0xe4 */ {  u32 a = r_edx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051d76f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d770: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d775: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d777: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d779: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d77b: push 0x6c21e8 */ { u32 v = 0x6c21e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d780: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d785u); f_00630f40();
    /* 0051d785: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d788: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d789: push 0x2c */ { u32 v = 0x2cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d78b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d78d: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d793: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d798u); f_005fa5b0();
    /* 0051d798: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d79a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d79c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d79e: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d7a1: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051d7a6: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7a7: push 0x126 */ { u32 v = 0x126u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7ac: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7ae: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7b0: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7b2: push 0x6c21cc */ { u32 v = 0x6c21ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7b7: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d7bcu); f_00630f40();
    /* 0051d7bc: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d7bf: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7c0: push 0x2d */ { u32 v = 0x2du; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7c2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7c4: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d7ca: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d7cfu); f_005fa5b0();
    /* 0051d7cf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7d1: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7d3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7d5: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d7d8: add ecx, 0xe4 */ {  u32 a = r_ecx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d7de: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7df: push 0x15d */ { u32 v = 0x15du; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7e4: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7e6: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7e8: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7ea: push 0x6c21b0 */ { u32 v = 0x6c21b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7ef: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51d7f4u); f_00630f40();
    /* 0051d7f4: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051d7f7: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7f8: push 0x2e */ { u32 v = 0x2eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7fa: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d7fc: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d802: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d807u); f_005fa5b0();
    /* 0051d807: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d809: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d80b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d80d: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d810: add edx, 0xf8 */ {  u32 a = r_edx; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051d816: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d817: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d81c: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d81e: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d820: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d822: push 0x6c2590 */ { u32 v = 0x6c2590u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d827: push 0x2f */ { u32 v = 0x2fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d829: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d82b: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d831: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d836u); f_005fa5b0();
    /* 0051d836: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d838: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d83a: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d83c: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d83f: add eax, 0xf8 */ {  u32 a = r_eax; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051d844: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d845: push 0x126 */ { u32 v = 0x126u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d84a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d84c: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d84e: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d850: push 0x6c258c */ { u32 v = 0x6c258cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d855: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d857: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d859: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d85f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d864u); f_005fa5b0();
    /* 0051d864: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d866: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d868: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d86a: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d86d: add ecx, 0xf8 */ {  u32 a = r_ecx; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d873: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d874: push 0x15d */ { u32 v = 0x15du; r_esp -= 4; W32(r_esp, v); }
    /* 0051d879: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d87b: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d87d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d87f: push 0x6c2588 */ { u32 v = 0x6c2588u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d884: push 0x31 */ { u32 v = 0x31u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d886: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d888: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d88e: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d893u); f_005fa5b0();
    /* 0051d893: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d895: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d897: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d899: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d89c: add edx, 0x10c */ {  u32 a = r_edx; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051d8a2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8a3: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8a8: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8aa: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8ac: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8ae: push 0x6c2584 */ { u32 v = 0x6c2584u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8b3: push 0x32 */ { u32 v = 0x32u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8b5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8b7: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d8bd: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d8c2u); f_005fa5b0();
    /* 0051d8c2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8c4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8c6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8c8: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d8cb: add eax, 0x10c */ {  u32 a = r_eax; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051d8d0: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8d1: push 0x126 */ { u32 v = 0x126u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8d6: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8d8: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8da: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8dc: push 0x6c2580 */ { u32 v = 0x6c2580u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8e1: push 0x33 */ { u32 v = 0x33u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8e3: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8e5: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d8eb: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d8f0u); f_005fa5b0();
    /* 0051d8f0: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8f2: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8f4: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d8f6: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d8f9: add ecx, 0x10c */ {  u32 a = r_ecx; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d8ff: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d900: push 0x15d */ { u32 v = 0x15du; r_esp -= 4; W32(r_esp, v); }
    /* 0051d905: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d907: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d909: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d90b: push 0x6c257c */ { u32 v = 0x6c257cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d910: push 0x34 */ { u32 v = 0x34u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d912: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d914: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d91a: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d91fu); f_005fa5b0();
    /* 0051d91f: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d921: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d923: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d925: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d928: add edx, 0x120 */ {  u32 a = r_edx; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051d92e: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d92f: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d934: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d936: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d938: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d93a: push 0x6c20ec */ { u32 v = 0x6c20ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d93f: push 0x35 */ { u32 v = 0x35u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d941: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d943: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d949: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d94eu); f_005fa5b0();
    /* 0051d94e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d950: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d952: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d954: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d957: add eax, 0x120 */ {  u32 a = r_eax; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051d95c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d95d: push 0x126 */ { u32 v = 0x126u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d962: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d964: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d966: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d968: push 0x6c20e4 */ { u32 v = 0x6c20e4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d96d: push 0x36 */ { u32 v = 0x36u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d96f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d971: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d977: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d97cu); f_005fa5b0();
    /* 0051d97c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d97e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d980: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d982: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d985: add ecx, 0x120 */ {  u32 a = r_ecx; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051d98b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d98c: push 0x15d */ { u32 v = 0x15du; r_esp -= 4; W32(r_esp, v); }
    /* 0051d991: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d993: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d995: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d997: push 0x6c20dc */ { u32 v = 0x6c20dcu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d99c: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d99e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9a0: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d9a6: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d9abu); f_005fa5b0();
    /* 0051d9ab: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9ad: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9af: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9b1: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d9b4: add edx, 0x134 */ {  u32 a = r_edx; u32 b = 0x134u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051d9ba: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9bb: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9c0: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9c2: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9c4: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9c6: push 0x6c20d4 */ { u32 v = 0x6c20d4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9cb: push 0x38 */ { u32 v = 0x38u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9cd: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9cf: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051d9d5: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51d9dau); f_005fa5b0();
    /* 0051d9da: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9dc: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9de: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9e0: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051d9e3: add eax, 0x134 */ {  u32 a = r_eax; u32 b = 0x134u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051d9e8: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9e9: push 0x126 */ { u32 v = 0x126u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9ee: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9f0: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9f2: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9f4: push 0x6c20cc */ { u32 v = 0x6c20ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9f9: push 0x39 */ { u32 v = 0x39u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9fb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051d9fd: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051da03: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51da08u); f_005fa5b0();
    /* 0051da08: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051da0a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da0c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da0e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051da11: add ecx, 0x134 */ {  u32 a = r_ecx; u32 b = 0x134u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051da17: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051da18: push 0x15d */ { u32 v = 0x15du; r_esp -= 4; W32(r_esp, v); }
    /* 0051da1d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da1f: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da21: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051da23: push 0x6c20c4 */ { u32 v = 0x6c20c4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da28: push 0x3a */ { u32 v = 0x3au; r_esp -= 4; W32(r_esp, v); }
    /* 0051da2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da2c: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051da32: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51da37u); f_005fa5b0();
    /* 0051da37: mov dword ptr [ebp - 0x3c], 0x1b */ W32((u32)(r_ebp+0xffffffc4u), 0x1bu);
    /* 0051da3e: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051da40: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da42: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da44: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051da47: add edx, 0x12f */ {  u32 a = r_edx; u32 b = 0x12fu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051da4d: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051da4e: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051da53: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da55: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da5a: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051da5c: push 0x6c20a4 */ { u32 v = 0x6c20a4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da61: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51da66u); f_00630f40();
    /* 0051da66: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051da69: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051da6a: push 0x3b */ { u32 v = 0x3bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051da6c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da6e: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051da74: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51da79u); f_005fa5b0();
    /* 0051da79: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051da7b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da7d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da7f: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051da82: add eax, 0x143 */ {  u32 a = r_eax; u32 b = 0x143u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051da87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051da88: push 0xee */ { u32 v = 0xeeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051da8d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da8f: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051da94: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051da96: push 0x6c215c */ { u32 v = 0x6c215cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051da9b: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51daa0u); f_00630f40();
    /* 0051daa0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051daa3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051daa4: push 0x3c */ { u32 v = 0x3cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051daa6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051daa8: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051daae: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51dab3u); f_005fa5b0();
    /* 0051dab3: mov dword ptr [ebp - 0x3c], 0x14 */ W32((u32)(r_ebp+0xffffffc4u), 0x14u);
    /* 0051daba: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dabc: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dabe: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dac0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051dac3: add ecx, 0x78 */ {  u32 a = r_ecx; u32 b = 0x78u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051dac6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051dac7: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dacc: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dace: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dad3: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dad5: push 0x6c2088 */ { u32 v = 0x6c2088u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dada: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51dadfu); f_00630f40();
    /* 0051dadf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051dae2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051dae3: push 0x46 */ { u32 v = 0x46u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dae5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dae7: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051daed: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51daf2u); f_005fa5b0();
    /* 0051daf2: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051daf5: sub edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0051daf8: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0051dafb: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dafd: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051daff: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db01: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051db04: add eax, 0x9e */ {  u32 a = r_eax; u32 b = 0x9eu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051db09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051db0a: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051db0f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db11: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db16: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051db18: push 0x6c171c */ { u32 v = 0x6c171cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051db1d: push 0x47 */ { u32 v = 0x47u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db1f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db21: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051db27: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51db2cu); f_005fa5b0();
    /* 0051db2c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051db2e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db30: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db32: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051db35: add ecx, 0xb2 */ {  u32 a = r_ecx; u32 b = 0xb2u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051db3b: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051db3c: push 0x195 */ { u32 v = 0x195u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db41: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db43: push 0xd2 */ { u32 v = 0xd2u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db48: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051db4a: push 0x6c205c */ { u32 v = 0x6c205cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051db4f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51db54u); f_00630f40();
    /* 0051db54: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051db57: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051db58: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db5a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db5c: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051db62: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51db67u); f_005fa5b0();
    /* 0051db67: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051db6a: sub edx, 0xa */ {  u32 a = r_edx; u32 b = 0xau; u32 r = (a - b) & 0xffffffffu; r_edx = r;  }
    /* 0051db6d: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 0051db70: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051db72: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db74: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db76: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051db79: add eax, 0xd0 */ {  u32 a = r_eax; u32 b = 0xd0u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051db7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051db7f: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051db84: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db86: push 0xa6 */ { u32 v = 0xa6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db8b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051db8d: push 0x6c2204 */ { u32 v = 0x6c2204u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db92: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51db97u); f_00630f40();
    /* 0051db97: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051db9a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051db9b: push 0x49 */ { u32 v = 0x49u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db9d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051db9f: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051dba5: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51dbaau); f_005fa5b0();
    /* 0051dbaa: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbac: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbae: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbb0: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051dbb3: add ecx, 0xe4 */ {  u32 a = r_ecx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051dbb9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbba: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbbf: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbc1: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbc3: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbc5: push 0x6c21e8 */ { u32 v = 0x6c21e8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbca: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51dbcfu); f_00630f40();
    /* 0051dbcf: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051dbd2: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbd3: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbd5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbd7: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051dbdd: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51dbe2u); f_005fa5b0();
    /* 0051dbe2: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbe4: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbe6: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbe8: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051dbeb: add edx, 0xe4 */ {  u32 a = r_edx; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051dbf1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbf2: push 0x1e6 */ { u32 v = 0x1e6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbf7: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbf9: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbfb: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dbfd: push 0x6c21cc */ { u32 v = 0x6c21ccu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc02: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51dc07u); f_00630f40();
    /* 0051dc07: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051dc0a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc0b: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc0f: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051dc15: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51dc1au); f_005fa5b0();
    /* 0051dc1a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc1c: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc1e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc20: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051dc23: add eax, 0xe4 */ {  u32 a = r_eax; u32 b = 0xe4u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051dc28: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc29: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc2e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc30: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc32: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc34: push 0x6c21b0 */ { u32 v = 0x6c21b0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc39: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51dc3eu); f_00630f40();
    /* 0051dc3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051dc41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc42: push 0x4c */ { u32 v = 0x4cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc44: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc46: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051dc4c: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51dc51u); f_005fa5b0();
    /* 0051dc51: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc53: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc55: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc57: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051dc5a: add ecx, 0xf8 */ {  u32 a = r_ecx; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051dc60: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc61: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc66: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc68: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc6a: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc6c: push 0x6c2578 */ { u32 v = 0x6c2578u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc71: push 0x4d */ { u32 v = 0x4du; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc73: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc75: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051dc7b: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51dc80u); f_005fa5b0();
    /* 0051dc80: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc82: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc84: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc86: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051dc89: add edx, 0xf8 */ {  u32 a = r_edx; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051dc8f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc90: push 0x1e6 */ { u32 v = 0x1e6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc95: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc97: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc99: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dc9b: push 0x6c2574 */ { u32 v = 0x6c2574u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dca0: push 0x4e */ { u32 v = 0x4eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dca2: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dca4: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051dcaa: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51dcafu); f_005fa5b0();
    /* 0051dcaf: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcb1: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcb3: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcb5: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051dcb8: add eax, 0xf8 */ {  u32 a = r_eax; u32 b = 0xf8u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051dcbd: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcbe: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcc3: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcc5: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcc7: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcc9: push 0x6c2570 */ { u32 v = 0x6c2570u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcce: push 0x4f */ { u32 v = 0x4fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcd0: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcd2: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051dcd8: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51dcddu); f_005fa5b0();
    /* 0051dcdd: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcdf: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dce1: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dce3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051dce6: add ecx, 0x10c */ {  u32 a = r_ecx; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051dcec: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051dced: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcf2: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcf4: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcf6: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcf8: push 0x6c256c */ { u32 v = 0x6c256cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcfd: push 0x50 */ { u32 v = 0x50u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dcff: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd01: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051dd07: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51dd0cu); f_005fa5b0();
    /* 0051dd0c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd0e: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd10: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd12: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051dd15: add edx, 0x10c */ {  u32 a = r_edx; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051dd1b: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd1c: push 0x1e6 */ { u32 v = 0x1e6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd21: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd23: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd25: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd27: push 0x6c2568 */ { u32 v = 0x6c2568u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd2c: push 0x51 */ { u32 v = 0x51u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd2e: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd30: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051dd36: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51dd3bu); f_005fa5b0();
    /* 0051dd3b: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd3d: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd3f: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd41: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051dd44: add eax, 0x10c */ {  u32 a = r_eax; u32 b = 0x10cu; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051dd49: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd4a: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd4f: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd51: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd53: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd55: push 0x6c2564 */ { u32 v = 0x6c2564u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd5a: push 0x52 */ { u32 v = 0x52u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd5c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd5e: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051dd64: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51dd69u); f_005fa5b0();
    /* 0051dd69: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd6b: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd6d: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd6f: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051dd72: add ecx, 0x120 */ {  u32 a = r_ecx; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051dd78: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd79: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd7e: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd80: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd82: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd84: push 0x6c2024 */ { u32 v = 0x6c2024u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd89: push 0x53 */ { u32 v = 0x53u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd8b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd8d: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051dd93: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51dd98u); f_005fa5b0();
    /* 0051dd98: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd9a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd9c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dd9e: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051dda1: add edx, 0x120 */ {  u32 a = r_edx; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051dda7: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051dda8: push 0x1e6 */ { u32 v = 0x1e6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ddad: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ddaf: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ddb1: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ddb3: push 0x6c201c */ { u32 v = 0x6c201cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ddb8: push 0x54 */ { u32 v = 0x54u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ddba: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ddbc: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051ddc2: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51ddc7u); f_005fa5b0();
    /* 0051ddc7: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ddc9: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ddcb: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ddcd: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051ddd0: add eax, 0x120 */ {  u32 a = r_eax; u32 b = 0x120u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051ddd5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051ddd6: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 0051dddb: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dddd: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dddf: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dde1: push 0x6c2014 */ { u32 v = 0x6c2014u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dde6: push 0x55 */ { u32 v = 0x55u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dde8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ddea: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051ddf0: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51ddf5u); f_005fa5b0();
    /* 0051ddf5: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051ddf7: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ddf9: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ddfb: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051ddfe: add ecx, 0x134 */ {  u32 a = r_ecx; u32 b = 0x134u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051de04: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051de05: push 0x1ae */ { u32 v = 0x1aeu; r_esp -= 4; W32(r_esp, v); }
    /* 0051de0a: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de0c: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de0e: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051de10: push 0x6c200c */ { u32 v = 0x6c200cu; r_esp -= 4; W32(r_esp, v); }
    /* 0051de15: push 0x56 */ { u32 v = 0x56u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de17: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de19: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051de1f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51de24u); f_005fa5b0();
    /* 0051de24: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051de26: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de28: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de2a: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051de2d: add edx, 0x134 */ {  u32 a = r_edx; u32 b = 0x134u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051de33: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051de34: push 0x1e6 */ { u32 v = 0x1e6u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de39: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de3b: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de3d: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051de3f: push 0x6c2004 */ { u32 v = 0x6c2004u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de44: push 0x57 */ { u32 v = 0x57u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de46: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de48: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051de4e: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51de53u); f_005fa5b0();
    /* 0051de53: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051de55: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de57: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de59: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051de5c: add eax, 0x134 */ {  u32 a = r_eax; u32 b = 0x134u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051de61: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051de62: push 0x21d */ { u32 v = 0x21du; r_esp -= 4; W32(r_esp, v); }
    /* 0051de67: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de69: push 0x37 */ { u32 v = 0x37u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de6b: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051de6d: push 0x6c1ffc */ { u32 v = 0x6c1ffcu; r_esp -= 4; W32(r_esp, v); }
    /* 0051de72: push 0x58 */ { u32 v = 0x58u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de74: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de76: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051de7c: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51de81u); f_005fa5b0();
    /* 0051de81: mov dword ptr [ebp - 0x3c], 0x1b */ W32((u32)(r_ebp+0xffffffc4u), 0x1bu);
    /* 0051de88: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051de8a: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de8c: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de8e: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051de91: add ecx, 0x12f */ {  u32 a = r_ecx; u32 b = 0x12fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0051de97: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051de98: push 0x195 */ { u32 v = 0x195u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de9d: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051de9f: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dea4: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dea6: push 0x6c1fd4 */ { u32 v = 0x6c1fd4u; r_esp -= 4; W32(r_esp, v); }
    /* 0051deab: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51deb0u); f_00630f40();
    /* 0051deb0: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051deb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051deb4: push 0x59 */ { u32 v = 0x59u; r_esp -= 4; W32(r_esp, v); }
    /* 0051deb6: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051deb8: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051debe: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51dec3u); f_005fa5b0();
    /* 0051dec3: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dec5: push 0x20 */ { u32 v = 0x20u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dec7: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dec9: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051decc: add edx, 0x143 */ {  u32 a = r_edx; u32 b = 0x143u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0051ded2: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051ded3: push 0x195 */ { u32 v = 0x195u; r_esp -= 4; W32(r_esp, v); }
    /* 0051ded8: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0051deda: push 0xc8 */ { u32 v = 0xc8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dedf: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0051dee1: push 0x6c1fb8 */ { u32 v = 0x6c1fb8u; r_esp -= 4; W32(r_esp, v); }
    /* 0051dee6: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x51deebu); f_00630f40();
    /* 0051deeb: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051deee: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051deef: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 0051def1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051def3: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051def9: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x51defeu); f_005fa5b0();
    /* 0051defe: mov dword ptr [ebp - 0x3c], 0x14 */ W32((u32)(r_ebp+0xffffffc4u), 0x14u);
    /* 0051df05: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051df07: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0051df0c: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051df0e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051df10: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0051df13: add eax, 3 */ {  u32 a = r_eax; u32 b = 0x3u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0051df16: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0051df17: push 0x7e */ { u32 v = 0x7eu; r_esp -= 4; W32(r_esp, v); }
    /* 0051df19: push 0x30e7f0 */ { u32 v = 0x30e7f0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051df1e: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051df20: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051df22: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051df28: call 0x5f9ce0 */ r_esp -= 4; W32(r_esp, 0x51df2du); f_005f9ce0();
    /* 0051df2d: push 9 */ { u32 v = 0x9u; r_esp -= 4; W32(r_esp, v); }
    /* 0051df2f: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051df35: call 0x5fb2b0 */ r_esp -= 4; W32(r_esp, 0x51df3au); f_005fb2b0();
    /* 0051df3a: mov dword ptr [ebp - 0x158], eax */ W32((u32)(r_ebp+0xfffffea8u), r_eax);
    /* 0051df40: mov ecx, dword ptr [ebp - 0x158] */ r_ecx = R32((u32)(r_ebp+0xfffffea8u));
    /* 0051df46: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0051df48: mov ecx, dword ptr [ebp - 0x158] */ r_ecx = R32((u32)(r_ebp+0xfffffea8u));
    /* 0051df4e: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0051df51: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x51df53u); call_ind(t); }
    /* 0051df53: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051df59: mov edx, dword ptr [ecx + 0x1c4] */ r_edx = R32((u32)(r_ecx+0x1c4u));
    /* 0051df5f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0051df60: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051df66: call 0x51e630 */ r_esp -= 4; W32(r_esp, 0x51df6bu); f_0051e630();
    /* 0051df6b: mov ecx, dword ptr [ebp - 0x154] */ r_ecx = R32((u32)(r_ebp+0xfffffeacu));
    /* 0051df71: call 0x51df90 */ r_esp -= 4; W32(r_esp, 0x51df76u); f_0051df90();
    /* 0051df76: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051df79: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0051df7b: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x51df80u); f_00686d72();
    /* 0051df80: mov esp, ebp */ r_esp = r_ebp;
    /* 0051df82: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051df83: ret  */ FN_RET(0x0051cd00); r_esp += 4; return;
}

void f_0051e680(void) /* PokerTournamentInProgressDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0051e680);
    /* 0051e680: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0051e681: mov ebp, esp */ r_ebp = r_esp;
    /* 0051e683: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0051e686: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0051e689: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0051e68c: mov dword ptr [ebp - 8], eax */ W32((u32)(r_ebp+0xfffffff8u), r_eax);
    /* 0051e68f: cmp dword ptr [ebp - 8], 8 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fC = (a < b); }
    /* 0051e693: ja 0x51e6fe */ if ((!fC&&!fZ)) goto L_0051e6fe;
L_0051e695:; BB(0x0051e695);
    /* 0051e695: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0051e698: jmp dword ptr [ecx*4 + 0x51e704] */ { u32 t = R32((u32)(r_ecx*4+0x51e704u)); switch (t) { case 0x51e69fu: goto L_0051e69f; case 0x51e6b3u: goto L_0051e6b3; case 0x51e6a9u: goto L_0051e6a9; case 0x51e6c9u: goto L_0051e6c9; case 0x51e6bfu: goto L_0051e6bf; default: UNSUP(0x0051e698, "jump table entry is not a known target"); } }
L_0051e69f:; BB(0x0051e69f);
    /* 0051e69f: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051e6a2: call 0x51e730 */ r_esp -= 4; W32(r_esp, 0x51e6a7u); f_0051e730();
    /* 0051e6a7: jmp 0x51e6fe */ goto L_0051e6fe;
L_0051e6a9:; BB(0x0051e6a9);
    /* 0051e6a9: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051e6ac: call 0x51eb90 */ r_esp -= 4; W32(r_esp, 0x51e6b1u); f_0051eb90();
    /* 0051e6b1: jmp 0x51e6fe */ goto L_0051e6fe;
L_0051e6b3:; BB(0x0051e6b3);
    /* 0051e6b3: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e6b5: call 0x60cce0 */ r_esp -= 4; W32(r_esp, 0x51e6bau); f_0060cce0();
    /* 0051e6ba: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0051e6bd: jmp 0x51e6fe */ goto L_0051e6fe;
L_0051e6bf:; BB(0x0051e6bf);
    /* 0051e6bf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0051e6c2: call 0x51e8f0 */ r_esp -= 4; W32(r_esp, 0x51e6c7u); f_0051e8f0();
    /* 0051e6c7: jmp 0x51e6fe */ goto L_0051e6fe;
L_0051e6c9:; BB(0x0051e6c9);
    /* 0051e6c9: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e6cb: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e6cc: fld dword ptr [0x6b3654] */ FPUSH(R_F32((u32)(0x6b3654u)));
    /* 0051e6d2: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051e6d5: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0051e6d6: fld1  */ FPUSH(1.0);
    /* 0051e6d8: fstp dword ptr [esp] */ W_F32((u32)(r_esp), ST(0)); FPOP();
    /* 0051e6db: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e6dd: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e6df: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e6e1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0051e6e3: push 0x30e7fa */ { u32 v = 0x30e7fau; r_esp -= 4; W32(r_esp, v); }
    /* 0051e6e8: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0051e6ee: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0051e6f0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0051e6f6: mov edx, dword ptr [eax + 0x80] */ r_edx = R32((u32)(r_eax+0x80u));
    /* 0051e6fc: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x51e6feu); call_ind(t); }
L_0051e6fe:; BB(0x0051e6fe);
    /* 0051e6fe: mov esp, ebp */ r_esp = r_ebp;
    /* 0051e700: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0051e701: ret 4 */ FN_RET(0x0051e680); r_esp += 8; return;
}

