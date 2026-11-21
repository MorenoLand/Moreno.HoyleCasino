#include "protos.h"

void f_0065ba70(void) /* FaceChoiceDialog::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065ba70);
    /* 0065ba70: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ba71: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ba73: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065ba74: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
    /* 0065ba77: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ba79: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065ba7b: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ba7e: call 0x5f71f0 */ r_esp -= 4; W32(r_esp, 0x65ba83u); f_005f71f0();
    /* 0065ba83: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ba86: mov dword ptr [eax], 0x6de66c */ W32((u32)(r_eax), 0x6de66cu);
    /* 0065ba8c: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ba8f: mov dword ptr [ecx + 0x1bc], 0 */ W32((u32)(r_ecx+0x1bcu), 0x0u);
    /* 0065ba99: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065ba9c: mov byte ptr [edx + 0x1c0], 0 */ W8((u32)(r_edx+0x1c0u), 0x0u);
    /* 0065baa3: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065baa6: mov byte ptr [eax + 0x1c1], 1 */ W8((u32)(r_eax+0x1c1u), 0x1u);
    /* 0065baad: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065bab0: mov byte ptr [ecx + 0x1c2], 0 */ W8((u32)(r_ecx+0x1c2u), 0x0u);
    /* 0065bab7: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065baba: mov byte ptr [edx + 0x1c3], 0 */ W8((u32)(r_edx+0x1c3u), 0x0u);
    /* 0065bac1: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065bac4: mov byte ptr [eax + 0x1c4], 0 */ W8((u32)(r_eax+0x1c4u), 0x0u);
    /* 0065bacb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065bace: mov esp, ebp */ r_esp = r_ebp;
    /* 0065bad0: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065bad1: ret  */ FN_RET(0x0065ba70); r_esp += 4; return;
}

void f_0065bb00(void) /* FaceChoiceDialog::vfunc15 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065bb00);
    /* 0065bb00: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb01: mov ebp, esp */ r_ebp = r_esp;
    /* 0065bb03: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb05: push 0x6ac774 */ { u32 v = 0x6ac774u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb0a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0065bb10: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb11: sub esp, 0x44 */ {  u32 a = r_esp; u32 b = 0x44u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065bb14: push ebx */ { u32 v = r_ebx; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb15: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb16: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065bb1b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065bb1d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb1e: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0065bb21: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0065bb27: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 0065bb2a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb2c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb2e: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb30: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb32: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb34: push 0x6de7bc */ { u32 v = 0x6de7bcu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb39: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65bb3eu); f_00630f40();
    /* 0065bb3e: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065bb41: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb42: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb44: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bb47: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065bb49: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bb4c: mov eax, dword ptr [edx + 0x48] */ r_eax = R32((u32)(r_edx+0x48u));
    /* 0065bb4f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bb51u); call_ind(t); }
    /* 0065bb51: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb52: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bb55: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bb57: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bb5a: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0065bb5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bb5fu); call_ind(t); }
    /* 0065bb5f: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb60: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bb63: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bb65: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bb68: mov eax, dword ptr [edx + 0x40] */ r_eax = R32((u32)(r_edx+0x40u));
    /* 0065bb6b: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bb6du); call_ind(t); }
    /* 0065bb6d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb6e: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb70: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bb72: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bb75: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x65bb7au); f_005f9de0();
    /* 0065bb7a: mov dword ptr [ebp - 0x14], eax */ W32((u32)(r_ebp+0xffffffecu), r_eax);
    /* 0065bb7d: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0065bb80: mov edx, dword ptr [ecx + 0x190] */ r_edx = R32((u32)(r_ecx+0x190u));
    /* 0065bb86: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0065bb89: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bb8c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065bb8e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bb91: mov eax, dword ptr [edx + 0x4c] */ r_eax = R32((u32)(r_edx+0x4cu));
    /* 0065bb94: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bb96u); call_ind(t); }
    /* 0065bb96: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0065bb99: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 0065bb9c: mov edx, dword ptr [ebp - 0x2c] */ r_edx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0065bb9f: mov dword ptr [ecx + 0xa8], edx */ W32((u32)(r_ecx+0xa8u), r_edx);
    /* 0065bba5: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bba8: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065bbaa: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bbad: mov eax, dword ptr [edx + 0x44] */ r_eax = R32((u32)(r_edx+0x44u));
    /* 0065bbb0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bbb2u); call_ind(t); }
    /* 0065bbb2: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065bbb4: jne 0x65bbd0 */ if (!fZ) goto L_0065bbd0;
L_0065bbb6:; BB(0x0065bbb6);
    /* 0065bbb6: push 0x5a */ { u32 v = 0x5au; r_esp -= 4; W32(r_esp, v); }
    /* 0065bbb8: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bbbb: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x65bbc0u); f_005fb300();
    /* 0065bbc0: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 0065bbc3: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0065bbc6: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bbc8: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0065bbcb: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065bbce: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bbd0u); call_ind(t); }
L_0065bbd0:; BB(0x0065bbd0);
    /* 0065bbd0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bbd3: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bbd5: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bbd8: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0065bbdb: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bbddu); call_ind(t); }
    /* 0065bbdd: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065bbdf: je 0x65bc94 */ if (fZ) goto L_0065bc94;
L_0065bbe5:; BB(0x0065bbe5);
    /* 0065bbe5: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bbe7: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bbec: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bbf1: push 0xff */ { u32 v = 0xffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bbf6: push 0xa1 */ { u32 v = 0xa1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bbfb: push 0x7c */ { u32 v = 0x7cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bbfd: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bbff: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc01: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bc04: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bc06: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bc09: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0065bc0c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bc0eu); call_ind(t); }
    /* 0065bc0e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc0f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bc12: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bc14: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bc17: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0065bc1a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bc1cu); call_ind(t); }
    /* 0065bc1c: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc1d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bc20: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bc22: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bc25: mov eax, dword ptr [edx + 0x54] */ r_eax = R32((u32)(r_edx+0x54u));
    /* 0065bc28: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bc2au); call_ind(t); }
    /* 0065bc2a: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc2b: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bc2e: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bc30: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bc33: mov eax, dword ptr [edx + 0x50] */ r_eax = R32((u32)(r_edx+0x50u));
    /* 0065bc36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bc38u); call_ind(t); }
    /* 0065bc38: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc39: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc3b: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc40: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc42: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc44: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bc47: call 0x5fa790 */ r_esp -= 4; W32(r_esp, 0x65bc4cu); f_005fa790();
    /* 0065bc4c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc4e: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc50: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc52: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bc55: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bc57: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bc5a: mov eax, dword ptr [edx + 0x5c] */ r_eax = R32((u32)(r_edx+0x5cu));
    /* 0065bc5d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bc5fu); call_ind(t); }
    /* 0065bc5f: add eax, 6 */ {  u32 a = r_eax; u32 b = 0x6u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065bc62: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc63: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bc66: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bc68: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bc6b: mov eax, dword ptr [edx + 0x58] */ r_eax = R32((u32)(r_edx+0x58u));
    /* 0065bc6e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bc70u); call_ind(t); }
    /* 0065bc70: add eax, 0xa */ {  u32 a = r_eax; u32 b = 0xau; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065bc73: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc74: push 0x28 */ { u32 v = 0x28u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc76: push 0x78 */ { u32 v = 0x78u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc78: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc7a: push 0x6de794 */ { u32 v = 0x6de794u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc7f: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65bc84u); f_00630f40();
    /* 0065bc84: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065bc87: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc88: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc8a: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc8c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bc8f: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x65bc94u); f_005fa5b0();
L_0065bc94:; BB(0x0065bc94);
    /* 0065bc94: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc96: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc98: push 0x4a */ { u32 v = 0x4au; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc9a: push 0x4b */ { u32 v = 0x4bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc9c: push 0x48 */ { u32 v = 0x48u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bc9e: push 0x6de780 */ { u32 v = 0x6de780u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bca3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65bca8u); f_00630f40();
    /* 0065bca8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065bcab: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bcac: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bcae: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bcb1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bcb3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bcb6: mov eax, dword ptr [edx + 0x64] */ r_eax = R32((u32)(r_edx+0x64u));
    /* 0065bcb9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bcbbu); call_ind(t); }
    /* 0065bcbb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bcbc: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bcbf: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bcc1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bcc4: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0065bcc7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bcc9u); call_ind(t); }
    /* 0065bcc9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bcca: push 0x30d4de */ { u32 v = 0x30d4deu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bccf: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bcd1: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bcd3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bcd6: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x65bcdbu); f_005f9de0();
    /* 0065bcdb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bcde: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bce0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bce3: mov eax, dword ptr [edx + 0x60] */ r_eax = R32((u32)(r_edx+0x60u));
    /* 0065bce6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bce8u); call_ind(t); }
    /* 0065bce8: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065bcea: jne 0x65bd06 */ if (!fZ) goto L_0065bd06;
L_0065bcec:; BB(0x0065bcec);
    /* 0065bcec: push 0x63 */ { u32 v = 0x63u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bcee: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bcf1: call 0x5fb300 */ r_esp -= 4; W32(r_esp, 0x65bcf6u); f_005fb300();
    /* 0065bcf6: mov dword ptr [ebp - 0x38], eax */ W32((u32)(r_ebp+0xffffffc8u), r_eax);
    /* 0065bcf9: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0065bcfc: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bcfe: mov ecx, dword ptr [ebp - 0x38] */ r_ecx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0065bd01: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065bd04: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bd06u); call_ind(t); }
L_0065bd06:; BB(0x0065bd06);
    /* 0065bd06: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0065bd0d: jmp 0x65bd18 */ goto L_0065bd18;
L_0065bd0f:; BB(0x0065bd0f);
    /* 0065bd0f: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065bd12: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065bd15: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0065bd18:; BB(0x0065bd18);
    /* 0065bd18: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065bd1c: jge 0x65be1e */ if ((fS==fO)) goto L_0065be1e;
L_0065bd22:; BB(0x0065bd22);
    /* 0065bd22: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065bd26: jne 0x65bd6f */ if (!fZ) goto L_0065bd6f;
L_0065bd28:; BB(0x0065bd28);
    /* 0065bd28: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065bd2e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065bd30: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065bd36: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 0065bd3c: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65bd3eu); call_ind(t); }
    /* 0065bd3e: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065bd41: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065bd43: je 0x65bd57 */ if (fZ) goto L_0065bd57;
L_0065bd45:; BB(0x0065bd45);
    /* 0065bd45: push 0x6de768 */ { u32 v = 0x6de768u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bd4a: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65bd4fu); f_00630f40();
    /* 0065bd4f: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065bd52: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0065bd55: jmp 0x65bd67 */ goto L_0065bd67;
L_0065bd57:; BB(0x0065bd57);
    /* 0065bd57: push 0x6de744 */ { u32 v = 0x6de744u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bd5c: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65bd61u); f_00630f40();
    /* 0065bd61: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065bd64: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
L_0065bd67:; BB(0x0065bd67);
    /* 0065bd67: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0065bd6a: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 0065bd6d: jmp 0x65bdb4 */ goto L_0065bdb4;
L_0065bd6f:; BB(0x0065bd6f);
    /* 0065bd6f: mov edx, dword ptr [0x162ee84] */ r_edx = R32((u32)(0x162ee84u));
    /* 0065bd75: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065bd77: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065bd7d: mov edx, dword ptr [eax + 0xc8] */ r_edx = R32((u32)(r_eax+0xc8u));
    /* 0065bd83: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65bd85u); call_ind(t); }
    /* 0065bd85: movzx eax, al */ r_eax = (u32)(u8)r_eax;
    /* 0065bd88: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065bd8a: je 0x65bd9e */ if (fZ) goto L_0065bd9e;
L_0065bd8c:; BB(0x0065bd8c);
    /* 0065bd8c: push 0x6de72c */ { u32 v = 0x6de72cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bd91: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65bd96u); f_00630f40();
    /* 0065bd96: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065bd99: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0065bd9c: jmp 0x65bdae */ goto L_0065bdae;
L_0065bd9e:; BB(0x0065bd9e);
    /* 0065bd9e: push 0x6de708 */ { u32 v = 0x6de708u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bda3: call 0x630f40 */ r_esp -= 4; W32(r_esp, 0x65bda8u); f_00630f40();
    /* 0065bda8: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065bdab: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
L_0065bdae:; BB(0x0065bdae);
    /* 0065bdae: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0065bdb1: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
L_0065bdb4:; BB(0x0065bdb4);
    /* 0065bdb4: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bdb6: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bdb8: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bdba: push 0x42 */ { u32 v = 0x42u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bdbc: push 0x45 */ { u32 v = 0x45u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bdbe: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bdc0: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 0065bdc3: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065bdc4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bdc6: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bdc9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065bdcb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bdce: mov eax, dword ptr [edx + 0x6c] */ r_eax = R32((u32)(r_edx+0x6cu));
    /* 0065bdd1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bdd3u); call_ind(t); }
    /* 0065bdd3: mov esi, eax */ r_esi = r_eax;
    /* 0065bdd5: xor ebx, ebx */ {  u32 a = r_ebx; u32 b = r_ebx; u32 r = (a ^ b) & 0xffffffffu; r_ebx = r;  }
    /* 0065bdd7: cmp dword ptr [ebp - 0x10], 0 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065bddb: sete bl */ r_ebx = (r_ebx & 0xffffff00u) | (((fZ) ? 1 : 0) & 0xffu);
    /* 0065bdde: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bde1: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bde3: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bde6: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065bde9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bdebu); call_ind(t); }
    /* 0065bdeb: imul ebx, eax */ { i64 t = (i64)(i32)r_ebx * (i64)(i32)r_eax; r_ebx = (u32)t; fC = fO = (t != (i64)(i32)(u32)t); }
    /* 0065bdee: add esi, ebx */ {  u32 a = r_esi; u32 b = r_ebx; u32 r = (a + b) & 0xffffffffu; r_esi = r;  }
    /* 0065bdf0: push esi */ { u32 v = r_esi; r_esp -= 4; W32(r_esp, v); }
    /* 0065bdf1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bdf4: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bdf6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bdf9: mov eax, dword ptr [edx + 0x68] */ r_eax = R32((u32)(r_edx+0x68u));
    /* 0065bdfc: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bdfeu); call_ind(t); }
    /* 0065bdfe: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bdff: push 0x30d4ca */ { u32 v = 0x30d4cau; r_esp -= 4; W32(r_esp, v); }
    /* 0065be04: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065be06: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065be09: add ecx, 0x5f */ {  u32 a = r_ecx; u32 b = 0x5fu; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065be0c: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065be0d: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065be0f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065be11: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065be14: call 0x5f9ff0 */ r_esp -= 4; W32(r_esp, 0x65be19u); f_005f9ff0();
    /* 0065be19: jmp 0x65bd0f */ goto L_0065bd0f;
L_0065be1e:; BB(0x0065be1e);
    /* 0065be1e: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065be21: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065be23: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065be26: mov edx, dword ptr [eax + 0x68] */ r_edx = R32((u32)(r_eax+0x68u));
    /* 0065be29: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65be2bu); call_ind(t); }
    /* 0065be2b: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065be2d: jne 0x65be67 */ if (!fZ) goto L_0065be67;
L_0065be2f:; BB(0x0065be2f);
    /* 0065be2f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065be31: push 0x5f */ { u32 v = 0x5fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065be33: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065be36: call 0x5fb3f0 */ r_esp -= 4; W32(r_esp, 0x65be3bu); f_005fb3f0();
    /* 0065be3b: mov dword ptr [ebp - 0x48], eax */ W32((u32)(r_ebp+0xffffffb8u), r_eax);
    /* 0065be3e: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0065be41: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065be43: mov ecx, dword ptr [ebp - 0x48] */ r_ecx = R32((u32)(r_ebp+0xffffffb8u));
    /* 0065be46: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065be49: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65be4bu); call_ind(t); }
    /* 0065be4b: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065be4d: push 0x60 */ { u32 v = 0x60u; r_esp -= 4; W32(r_esp, v); }
    /* 0065be4f: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065be52: call 0x5fb3f0 */ r_esp -= 4; W32(r_esp, 0x65be57u); f_005fb3f0();
    /* 0065be57: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0065be5a: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0065be5d: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065be5f: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0065be62: mov eax, dword ptr [edx + 0x70] */ r_eax = R32((u32)(r_edx+0x70u));
    /* 0065be65: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65be67u); call_ind(t); }
L_0065be67:; BB(0x0065be67);
    /* 0065be67: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065be69: push 0x30 */ { u32 v = 0x30u; r_esp -= 4; W32(r_esp, v); }
    /* 0065be6b: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065be6d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065be70: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065be72: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065be75: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 0065be78: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65be7au); call_ind(t); }
    /* 0065be7a: add eax, 5 */ {  u32 a = r_eax; u32 b = 0x5u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065be7d: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065be7e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065be81: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065be83: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065be86: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0065be89: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65be8bu); call_ind(t); }
    /* 0065be8b: add eax, 2 */ {  u32 a = r_eax; u32 b = 0x2u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065be8e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065be8f: push 0x11 */ { u32 v = 0x11u; r_esp -= 4; W32(r_esp, v); }
    /* 0065be91: push 0x99 */ { u32 v = 0x99u; r_esp -= 4; W32(r_esp, v); }
    /* 0065be96: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065be98: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065be9d: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065be9f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bea1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bea4: call 0x5fa5b0 */ r_esp -= 4; W32(r_esp, 0x65bea9u); f_005fa5b0();
    /* 0065bea9: push 0x90 */ { u32 v = 0x90u; r_esp -= 4; W32(r_esp, v); }
    /* 0065beae: call 0x686d82 */ r_esp -= 4; W32(r_esp, 0x65beb3u); f_00686d82();
    /* 0065beb3: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065beb6: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0065beb9: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0065bec0: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065bec4: je 0x65bed7 */ if (fZ) goto L_0065bed7;
L_0065bec6:; BB(0x0065bec6);
    /* 0065bec6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bec9: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065beca: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065becd: call 0x65cb60 */ r_esp -= 4; W32(r_esp, 0x65bed2u); f_0065cb60();
    /* 0065bed2: mov dword ptr [ebp - 0x50], eax */ W32((u32)(r_ebp+0xffffffb0u), r_eax);
    /* 0065bed5: jmp 0x65bede */ goto L_0065bede;
L_0065bed7:; BB(0x0065bed7);
    /* 0065bed7: mov dword ptr [ebp - 0x50], 0 */ W32((u32)(r_ebp+0xffffffb0u), 0x0u);
L_0065bede:; BB(0x0065bede);
    /* 0065bede: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 0065bee1: mov dword ptr [ebp - 0x20], edx */ W32((u32)(r_ebp+0xffffffe0u), r_edx);
    /* 0065bee4: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 0065beeb: push 0x10 */ { u32 v = 0x10u; r_esp -= 4; W32(r_esp, v); }
    /* 0065beed: push 0x74 */ { u32 v = 0x74u; r_esp -= 4; W32(r_esp, v); }
    /* 0065beef: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bef1: push 0x14 */ { u32 v = 0x14u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bef3: push 0x76 */ { u32 v = 0x76u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bef5: push 0x12 */ { u32 v = 0x12u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bef7: push 0x70 */ { u32 v = 0x70u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bef9: push 0x30d4d0 */ { u32 v = 0x30d4d0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065befe: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf00: push 4 */ { u32 v = 0x4u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf02: push 0x30d4cd */ { u32 v = 0x30d4cdu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf07: push 0x71 */ { u32 v = 0x71u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf09: push 0x8a */ { u32 v = 0x8au; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf0e: push 0x30d4ce */ { u32 v = 0x30d4ceu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf13: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf15: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf17: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bf1a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065bf1c: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bf1f: mov eax, dword ptr [edx + 0x78] */ r_eax = R32((u32)(r_edx+0x78u));
    /* 0065bf22: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bf24u); call_ind(t); }
    /* 0065bf24: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf25: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bf28: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bf2a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bf2d: mov eax, dword ptr [edx + 0x74] */ r_eax = R32((u32)(r_edx+0x74u));
    /* 0065bf30: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bf32u); call_ind(t); }
    /* 0065bf32: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf33: push 0x30d4da */ { u32 v = 0x30d4dau; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf38: push 0x62 */ { u32 v = 0x62u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf3a: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0065bf3d: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf3e: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bf41: call 0x5fab80 */ r_esp -= 4; W32(r_esp, 0x65bf46u); f_005fab80();
    /* 0065bf46: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bf49: mov dword ptr [edx + 0x1bc], eax */ W32((u32)(r_edx+0x1bcu), r_eax);
    /* 0065bf4f: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065bf54: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065bf56: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065bf5c: mov eax, dword ptr [edx + 0xc8] */ r_eax = R32((u32)(r_edx+0xc8u));
    /* 0065bf62: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bf64u); call_ind(t); }
    /* 0065bf64: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065bf67: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065bf69: je 0x65c0ad */ if (fZ) goto L_0065c0ad;
L_0065bf6f:; BB(0x0065bf6f);
    /* 0065bf6f: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bf72: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0065bf74: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bf77: mov edx, dword ptr [eax + 0x7c] */ r_edx = R32((u32)(r_eax+0x7cu));
    /* 0065bf7a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x65bf7cu); call_ind(t); }
    /* 0065bf7c: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065bf7e: je 0x65c0ad */ if (fZ) goto L_0065c0ad;
L_0065bf84:; BB(0x0065bf84);
    /* 0065bf84: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf86: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf88: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf8a: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf8c: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf8e: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf93: push 2 */ { u32 v = 0x2u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bf95: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bf98: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065bf9a: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bf9d: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0065bfa3: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bfa5u); call_ind(t); }
    /* 0065bfa5: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bfa6: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bfa9: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bfab: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bfae: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 0065bfb1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bfb3u); call_ind(t); }
    /* 0065bfb3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bfb4: push 0x231ae0 */ { u32 v = 0x231ae0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bfb9: push 0x5b */ { u32 v = 0x5bu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bfbb: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bfbd: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bfc0: call 0x5f9de0 */ r_esp -= 4; W32(r_esp, 0x65bfc5u); f_005f9de0();
    /* 0065bfc5: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bfc7: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bfc9: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bfcb: push 0x1f */ { u32 v = 0x1fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bfcd: push 0x6b27f8 */ { u32 v = 0x6b27f8u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bfd2: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bfd4: push 0x138f */ { u32 v = 0x138fu; r_esp -= 4; W32(r_esp, v); }
    /* 0065bfd9: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065bfdb: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bfde: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bfe0: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bfe3: mov eax, dword ptr [edx + 0x80] */ r_eax = R32((u32)(r_edx+0x80u));
    /* 0065bfe9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bfebu); call_ind(t); }
    /* 0065bfeb: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bfec: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bfef: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065bff1: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065bff4: mov eax, dword ptr [edx + 0x7c] */ r_eax = R32((u32)(r_edx+0x7cu));
    /* 0065bff7: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65bff9u); call_ind(t); }
    /* 0065bff9: add eax, 0x22 */ {  u32 a = r_eax; u32 b = 0x22u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0065bffc: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065bffd: push 0x231ae1 */ { u32 v = 0x231ae1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c002: push 0x5c */ { u32 v = 0x5cu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c004: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c006: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065c009: call 0x5faee0 */ r_esp -= 4; W32(r_esp, 0x65c00eu); f_005faee0();
    /* 0065c00e: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 0065c011: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c013: push 5 */ { u32 v = 0x5u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c015: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065c018: call 0x602e30 */ r_esp -= 4; W32(r_esp, 0x65c01du); f_00602e30();
    /* 0065c01d: mov ecx, dword ptr [ebp - 0x30] */ r_ecx = R32((u32)(r_ebp+0xffffffd0u));
    /* 0065c020: mov ecx, dword ptr [ecx + 0x1bc] */ r_ecx = R32((u32)(r_ecx+0x1bcu));
    /* 0065c026: call 0x65d150 */ r_esp -= 4; W32(r_esp, 0x65c02bu); f_0065d150();
    /* 0065c02b: mov dword ptr [ebp - 0x1c], eax */ W32((u32)(r_ebp+0xffffffe4u), r_eax);
    /* 0065c02e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c030: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0065c033: add edx, 0x186bf */ {  u32 a = r_edx; u32 b = 0x186bfu; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065c039: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c03a: mov eax, dword ptr [ebp - 0x18] */ r_eax = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065c03d: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065c03f: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0065c042: mov eax, dword ptr [edx + 0xf0] */ r_eax = R32((u32)(r_edx+0xf0u));
    /* 0065c048: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65c04au); call_ind(t); }
    /* 0065c04a: movzx ecx, byte ptr [0x795f95] */ r_ecx = (u32)R8((u32)(0x795f95u));
    /* 0065c051: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c053: je 0x65c0ad */ if (fZ) goto L_0065c0ad;
L_0065c055:; BB(0x0065c055);
    /* 0065c055: mov dword ptr [ebp - 0x10], 0x186e1 */ W32((u32)(r_ebp+0xfffffff0u), 0x186e1u);
    /* 0065c05c: jmp 0x65c067 */ goto L_0065c067;
L_0065c05e:; BB(0x0065c05e);
    /* 0065c05e: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c061: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0065c064: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_0065c067:; BB(0x0065c067);
    /* 0065c067: cmp dword ptr [ebp - 0x10], 0x186e4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x186e4u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065c06e: jg 0x65c081 */ if ((!fZ&&fS==fO)) goto L_0065c081;
L_0065c070:; BB(0x0065c070);
    /* 0065c070: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c073: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c074: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0065c07a: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x65c07fu); f_005f2ba0();
    /* 0065c07f: jmp 0x65c05e */ goto L_0065c05e;
L_0065c081:; BB(0x0065c081);
    /* 0065c081: mov dword ptr [ebp - 0x10], 0x186e6 */ W32((u32)(r_ebp+0xfffffff0u), 0x186e6u);
    /* 0065c088: jmp 0x65c093 */ goto L_0065c093;
L_0065c08a:; BB(0x0065c08a);
    /* 0065c08a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c08d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c090: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0065c093:; BB(0x0065c093);
    /* 0065c093: cmp dword ptr [ebp - 0x10], 0x186e9 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x186e9u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065c09a: jg 0x65c0ad */ if ((!fZ&&fS==fO)) goto L_0065c0ad;
L_0065c09c:; BB(0x0065c09c);
    /* 0065c09c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0065c09f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c0a0: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0065c0a6: call 0x5f2ba0 */ r_esp -= 4; W32(r_esp, 0x65c0abu); f_005f2ba0();
    /* 0065c0ab: jmp 0x65c08a */ goto L_0065c08a;
L_0065c0ad:; BB(0x0065c0ad);
    /* 0065c0ad: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065c0b0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0065c0b7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0065c0b8: pop esi */ { u32 v = R32(r_esp); r_esp += 4; r_esi = v; }
    /* 0065c0b9: pop ebx */ { u32 v = R32(r_esp); r_esp += 4; r_ebx = v; }
    /* 0065c0ba: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c0bc: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c0bd: ret  */ FN_RET(0x0065bb00); r_esp += 4; return;
}

void f_0065c660(void) /* FaceChoiceDialog::vfunc6 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065c660);
    /* 0065c660: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065c661: mov ebp, esp */ r_ebp = r_esp;
    /* 0065c663: sub esp, 0x28 */ {  u32 a = r_esp; u32 b = 0x28u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065c666: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0065c669: mov eax, dword ptr [ebp + 8] */ r_eax = R32((u32)(r_ebp+0x8u));
    /* 0065c66c: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 0065c66f: cmp dword ptr [ebp - 0x28], 0x5a */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x5au; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c673: je 0x65c68a */ if (fZ) goto L_0065c68a;
L_0065c675:; BB(0x0065c675);
    /* 0065c675: cmp dword ptr [ebp - 0x28], 0x5b */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x5bu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c679: je 0x65c6e1 */ if (fZ) goto L_0065c6e1;
L_0065c67b:; BB(0x0065c67b);
    /* 0065c67b: cmp dword ptr [ebp - 0x28], 0x63 */ {  u32 a = R32((u32)(r_ebp+0xffffffd8u)); u32 b = 0x63u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c67f: je 0x65c73d */ if (fZ) goto L_0065c73d;
L_0065c685:; BB(0x0065c685);
    /* 0065c685: jmp 0x65c745 */ goto L_0065c745;
L_0065c68a:; BB(0x0065c68a);
    /* 0065c68a: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c68d: call 0x5f87d0 */ r_esp -= 4; W32(r_esp, 0x65c692u); f_005f87d0();
    /* 0065c692: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c694: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c697: call 0x5fb3a0 */ r_esp -= 4; W32(r_esp, 0x65c69cu); f_005fb3a0();
    /* 0065c69c: mov ecx, eax */ r_ecx = r_eax;
    /* 0065c69e: call 0x606570 */ r_esp -= 4; W32(r_esp, 0x65c6a3u); f_00606570();
    /* 0065c6a3: cmp eax, 0x5f */ {  u32 a = r_eax; u32 b = 0x5fu; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c6a6: jne 0x65c6b7 */ if (!fZ) goto L_0065c6b7;
L_0065c6a8:; BB(0x0065c6a8);
    /* 0065c6a8: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c6aa: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0065c6b0: call 0x64f470 */ r_esp -= 4; W32(r_esp, 0x65c6b5u); f_0064f470();
    /* 0065c6b5: jmp 0x65c6df */ goto L_0065c6df;
L_0065c6b7:; BB(0x0065c6b7);
    /* 0065c6b7: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c6ba: movsx edx, byte ptr [ecx + 0x1c2] */ r_edx = (u32)(i32)(i8)R8((u32)(r_ecx+0x1c2u));
    /* 0065c6c1: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c6c2: mov eax, dword ptr [ebp - 0x24] */ r_eax = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c6c5: mov ecx, dword ptr [eax + 0x1bc] */ r_ecx = R32((u32)(r_eax+0x1bcu));
    /* 0065c6cb: add ecx, 0x74 */ {  u32 a = r_ecx; u32 b = 0x74u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065c6ce: call 0x6639a0 */ r_esp -= 4; W32(r_esp, 0x65c6d3u); f_006639a0();
    /* 0065c6d3: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065c6d4: mov ecx, dword ptr [0x162ee80] */ r_ecx = R32((u32)(0x162ee80u));
    /* 0065c6da: call 0x64f470 */ r_esp -= 4; W32(r_esp, 0x65c6dfu); f_0064f470();
L_0065c6df:; BB(0x0065c6df);
    /* 0065c6df: jmp 0x65c745 */ goto L_0065c745;
L_0065c6e1:; BB(0x0065c6e1);
    /* 0065c6e1: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c6e4: cmp dword ptr [ecx + 0x1bc], 0 */ {  u32 a = R32((u32)(r_ecx+0x1bcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c6eb: je 0x65c73b */ if (fZ) goto L_0065c73b;
L_0065c6ed:; BB(0x0065c6ed);
    /* 0065c6ed: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c6f0: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0065c6f6: cmp dword ptr [eax + 0x70], 0 */ {  u32 a = R32((u32)(r_eax+0x70u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065c6fa: je 0x65c73b */ if (fZ) goto L_0065c73b;
L_0065c6fc:; BB(0x0065c6fc);
    /* 0065c6fc: mov dword ptr [ebp - 0x1c], 0x1770 */ W32((u32)(r_ebp+0xffffffe4u), 0x1770u);
    /* 0065c703: mov dword ptr [ebp - 0x18], 0xffffffff */ W32((u32)(r_ebp+0xffffffe8u), 0xffffffffu);
    /* 0065c70a: fldz  */ FPUSH(0.0);
    /* 0065c70c: fstp qword ptr [ebp - 0x10] */ W_F64((u32)(r_ebp+0xfffffff0u), ST(0)); FPOP();
    /* 0065c70f: fld1  */ FPUSH(1.0);
    /* 0065c711: fstp qword ptr [ebp - 8] */ W_F64((u32)(r_ebp+0xfffffff8u), ST(0)); FPOP();
    /* 0065c714: mov dword ptr [ebp - 0x20], 0xffffffff */ W32((u32)(r_ebp+0xffffffe0u), 0xffffffffu);
    /* 0065c71b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c71d: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065c71f: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c721: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065c723: lea ecx, [ebp - 0x20] */ r_ecx = (u32)(r_ebp+0xffffffe0u);
    /* 0065c726: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065c727: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c72a: mov eax, dword ptr [edx + 0x1bc] */ r_eax = R32((u32)(r_edx+0x1bcu));
    /* 0065c730: mov ecx, dword ptr [eax + 0x70] */ r_ecx = R32((u32)(r_eax+0x70u));
    /* 0065c733: mov ecx, dword ptr [ecx + 0x20] */ r_ecx = R32((u32)(r_ecx+0x20u));
    /* 0065c736: call 0x6476f0 */ r_esp -= 4; W32(r_esp, 0x65c73bu); f_006476f0();
L_0065c73b:; BB(0x0065c73b);
    /* 0065c73b: jmp 0x65c745 */ goto L_0065c745;
L_0065c73d:; BB(0x0065c73d);
    /* 0065c73d: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0065c740: call 0x65c0c0 */ r_esp -= 4; W32(r_esp, 0x65c745u); f_0065c0c0();
L_0065c745:; BB(0x0065c745);
    /* 0065c745: mov esp, ebp */ r_esp = r_ebp;
    /* 0065c747: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065c748: ret 4 */ FN_RET(0x0065c660); r_esp += 8; return;
}

void f_0065ca80(void) /* FaceChoiceDialog::vfunc33 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0065ca80);
    /* 0065ca80: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0065ca81: mov ebp, esp */ r_ebp = r_esp;
    /* 0065ca83: sub esp, 0x24 */ {  u32 a = r_esp; u32 b = 0x24u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0065ca86: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0065ca8b: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0065ca8d: mov dword ptr [ebp - 0xc], eax */ W32((u32)(r_ebp+0xfffffff4u), r_eax);
    /* 0065ca90: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 0065ca93: mov eax, dword ptr [0x162ee84] */ r_eax = R32((u32)(0x162ee84u));
    /* 0065ca98: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0065ca9a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065caa0: mov eax, dword ptr [edx + 0x31c] */ r_eax = R32((u32)(r_edx+0x31cu));
    /* 0065caa6: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65caa8u); call_ind(t); }
    /* 0065caa8: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
    /* 0065caab: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 0065caad: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0065caaf: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065cab2: call 0x63a3e0 */ r_esp -= 4; W32(r_esp, 0x65cab7u); f_0063a3e0();
    /* 0065cab7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065caba: call 0x63aac0 */ r_esp -= 4; W32(r_esp, 0x65cabfu); f_0063aac0();
    /* 0065cabf: mov dword ptr [eax], 2 */ W32((u32)(r_eax), 0x2u);
    /* 0065cac5: mov dword ptr [ebp - 8], 0 */ W32((u32)(r_ebp+0xfffffff8u), 0x0u);
    /* 0065cacc: jmp 0x65cad7 */ goto L_0065cad7;
L_0065cace:; BB(0x0065cace);
    /* 0065cace: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065cad1: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0065cad4: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
L_0065cad7:; BB(0x0065cad7);
    /* 0065cad7: cmp dword ptr [ebp - 8], 0x64 */ {  u32 a = R32((u32)(r_ebp+0xfffffff8u)); u32 b = 0x64u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0065cadb: jge 0x65cb48 */ if ((fS==fO)) goto L_0065cb48;
L_0065cadd:; BB(0x0065cadd);
    /* 0065cadd: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0065cae0: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065cae1: push 0x6d44ec */ { u32 v = 0x6d44ecu; r_esp -= 4; W32(r_esp, v); }
    /* 0065cae6: lea eax, [ebp - 0x1c] */ r_eax = (u32)(r_ebp+0xffffffe4u);
    /* 0065cae9: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065caea: call dword ptr [0x6b2220] */ { u32 t = R32((u32)(0x6b2220u)); r_esp -= 4; W32(r_esp, 0x65caf0u); call_ind(t); }
    /* 0065caf0: add esp, 0xc */ {  u32 a = r_esp; u32 b = 0xcu; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065caf3: lea ecx, [ebp - 0x1c] */ r_ecx = (u32)(r_ebp+0xffffffe4u);
    /* 0065caf6: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0065caf7: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065cafa: call 0x63ab10 */ r_esp -= 4; W32(r_esp, 0x65caffu); f_0063ab10();
    /* 0065caff: movzx edx, al */ r_edx = (u32)(u8)r_eax;
    /* 0065cb02: test edx, edx */ {  u32 a = r_edx; u32 b = r_edx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065cb04: je 0x65cb46 */ if (fZ) goto L_0065cb46;
L_0065cb06:; BB(0x0065cb06);
    /* 0065cb06: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065cb09: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065cb0a: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065cb10: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0065cb12: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 0065cb18: mov eax, dword ptr [edx + 0x368] */ r_eax = R32((u32)(r_edx+0x368u));
    /* 0065cb1e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x65cb20u); call_ind(t); }
    /* 0065cb20: movzx ecx, al */ r_ecx = (u32)(u8)r_eax;
    /* 0065cb23: test ecx, ecx */ {  u32 a = r_ecx; u32 b = r_ecx; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065cb25: je 0x65cb29 */ if (fZ) goto L_0065cb29;
L_0065cb27:; BB(0x0065cb27);
    /* 0065cb27: jmp 0x65cace */ goto L_0065cace;
L_0065cb29:; BB(0x0065cb29);
    /* 0065cb29: mov edx, dword ptr [ebp + 8] */ r_edx = R32((u32)(r_ebp+0x8u));
    /* 0065cb2c: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0065cb2d: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0065cb30: call 0x57a470 */ r_esp -= 4; W32(r_esp, 0x65cb35u); f_0057a470();
    /* 0065cb35: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0065cb36: call 0x686ec0 */ r_esp -= 4; W32(r_esp, 0x65cb3bu); f_00686ec0();
    /* 0065cb3b: add esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
    /* 0065cb3e: test eax, eax */ {  u32 a = r_eax; u32 b = r_eax; u32 r = (a & b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0065cb40: jne 0x65cb46 */ if (!fZ) goto L_0065cb46;
L_0065cb42:; BB(0x0065cb42);
    /* 0065cb42: mov al, 1 */ r_eax = (r_eax & 0xffffff00u) | ((0x1u) & 0xffu);
    /* 0065cb44: jmp 0x65cb4a */ goto L_0065cb4a;
L_0065cb46:; BB(0x0065cb46);
    /* 0065cb46: jmp 0x65cace */ goto L_0065cace;
L_0065cb48:; BB(0x0065cb48);
    /* 0065cb48: xor al, al */ {  u32 a = (u8)r_eax; u32 b = (u8)r_eax; u32 r = (a ^ b) & 0xffu; r_eax = (r_eax & 0xffffff00u) | ((r) & 0xffu);  }
L_0065cb4a:; BB(0x0065cb4a);
    /* 0065cb4a: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 0065cb4d: xor ecx, ebp */ {  u32 a = r_ecx; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_ecx = r;  }
    /* 0065cb4f: call 0x686d72 */ r_esp -= 4; W32(r_esp, 0x65cb54u); f_00686d72();
    /* 0065cb54: mov esp, ebp */ r_esp = r_ebp;
    /* 0065cb56: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0065cb57: ret 4 */ FN_RET(0x0065ca80); r_esp += 8; return;
}

