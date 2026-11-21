#include "protos.h"

void f_00678900(void) /* WinAnimation::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00678900);
    /* 00678900: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00678901: mov ebp, esp */ r_ebp = r_esp;
    /* 00678903: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00678906: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 00678909: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067890c: call 0x5f5f50 */ r_esp -= 4; W32(r_esp, 0x678911u); f_005f5f50();
    /* 00678911: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678914: mov dword ptr [eax], 0x6e1fe4 */ W32((u32)(r_eax), 0x6e1fe4u);
    /* 0067891a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067891d: mov dword ptr [ecx + 0x194], 0 */ W32((u32)(r_ecx+0x194u), 0x0u);
    /* 00678927: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067892a: mov byte ptr [edx + 0x2ac], 0 */ W8((u32)(r_edx+0x2acu), 0x0u);
    /* 00678931: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00678938: jmp 0x678943 */ goto L_00678943;
L_0067893a:; BB(0x0067893a);
    /* 0067893a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067893d: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00678940: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_00678943:; BB(0x00678943);
    /* 00678943: cmp dword ptr [ebp - 4], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00678947: jge 0x67896d */ if ((fS==fO)) goto L_0067896d;
L_00678949:; BB(0x00678949);
    /* 00678949: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067894c: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067894f: mov dword ptr [edx + ecx*4 + 0x198], 0 */ W32((u32)(r_edx+r_ecx*4+0x198u), 0x0u);
    /* 0067895a: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0067895d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678960: mov dword ptr [ecx + eax*4 + 0x1c8], 0 */ W32((u32)(r_ecx+r_eax*4+0x1c8u), 0x0u);
    /* 0067896b: jmp 0x67893a */ goto L_0067893a;
L_0067896d:; BB(0x0067896d);
    /* 0067896d: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00678974: jmp 0x67897f */ goto L_0067897f;
L_00678976:; BB(0x00678976);
    /* 00678976: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678979: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067897c: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0067897f:; BB(0x0067897f);
    /* 0067897f: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00678983: jge 0x678998 */ if ((fS==fO)) goto L_00678998;
L_00678985:; BB(0x00678985);
    /* 00678985: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678988: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0067898b: mov dword ptr [ecx + eax*4 + 0x1f8], 0 */ W32((u32)(r_ecx+r_eax*4+0x1f8u), 0x0u);
    /* 00678996: jmp 0x678976 */ goto L_00678976;
L_00678998:; BB(0x00678998);
    /* 00678998: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0067899f: jmp 0x6789aa */ goto L_006789aa;
L_006789a1:; BB(0x006789a1);
    /* 006789a1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006789a4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 006789a7: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_006789aa:; BB(0x006789aa);
    /* 006789aa: cmp dword ptr [ebp - 4], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006789ae: jge 0x6789e5 */ if ((fS==fO)) goto L_006789e5;
L_006789b0:; BB(0x006789b0);
    /* 006789b0: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006789b3: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006789b6: mov dword ptr [ecx + eax*4 + 0x20c], 0 */ W32((u32)(r_ecx+r_eax*4+0x20cu), 0x0u);
    /* 006789c1: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006789c4: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 006789c7: mov dword ptr [eax + edx*4 + 0x21c], 0 */ W32((u32)(r_eax+r_edx*4+0x21cu), 0x0u);
    /* 006789d2: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 006789d5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 006789d8: mov dword ptr [edx + ecx*4 + 0x25c], 0 */ W32((u32)(r_edx+r_ecx*4+0x25cu), 0x0u);
    /* 006789e3: jmp 0x6789a1 */ goto L_006789a1;
L_006789e5:; BB(0x006789e5);
    /* 006789e5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 006789ec: jmp 0x6789f7 */ goto L_006789f7;
L_006789ee:; BB(0x006789ee);
    /* 006789ee: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 006789f1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006789f4: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_006789f7:; BB(0x006789f7);
    /* 006789f7: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006789fb: jge 0x678a10 */ if ((fS==fO)) goto L_00678a10;
L_006789fd:; BB(0x006789fd);
    /* 006789fd: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678a00: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678a03: mov dword ptr [edx + ecx*4 + 0x248], 0 */ W32((u32)(r_edx+r_ecx*4+0x248u), 0x0u);
    /* 00678a0e: jmp 0x6789ee */ goto L_006789ee;
L_00678a10:; BB(0x00678a10);
    /* 00678a10: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678a13: mov dword ptr [eax + 0x298], 0 */ W32((u32)(r_eax+0x298u), 0x0u);
    /* 00678a1d: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678a20: mov dword ptr [ecx + 0x190], 0 */ W32((u32)(r_ecx+0x190u), 0x0u);
    /* 00678a2a: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678a2d: mov dword ptr [edx + 0x2a4], 0xffffffff */ W32((u32)(r_edx+0x2a4u), 0xffffffffu);
    /* 00678a37: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678a3a: mov dword ptr [eax + 0x208], 0 */ W32((u32)(r_eax+0x208u), 0x0u);
    /* 00678a44: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678a47: mov dword ptr [ecx + 0x204], 0 */ W32((u32)(r_ecx+0x204u), 0x0u);
    /* 00678a51: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678a54: mov dword ptr [edx + 0x22c], 0 */ W32((u32)(r_edx+0x22cu), 0x0u);
    /* 00678a5e: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678a61: mov dword ptr [eax + 0x230], 0 */ W32((u32)(r_eax+0x230u), 0x0u);
    /* 00678a6b: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678a6e: mov dword ptr [ecx + 0x240], 0 */ W32((u32)(r_ecx+0x240u), 0x0u);
    /* 00678a78: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00678a7f: jmp 0x678a8a */ goto L_00678a8a;
L_00678a81:; BB(0x00678a81);
    /* 00678a81: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678a84: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00678a87: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00678a8a:; BB(0x00678a8a);
    /* 00678a8a: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00678a8e: jge 0x678aa3 */ if ((fS==fO)) goto L_00678aa3;
L_00678a90:; BB(0x00678a90);
    /* 00678a90: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678a93: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678a96: mov dword ptr [ecx + eax*4 + 0x234], 0 */ W32((u32)(r_ecx+r_eax*4+0x234u), 0x0u);
    /* 00678aa1: jmp 0x678a81 */ goto L_00678a81;
L_00678aa3:; BB(0x00678aa3);
    /* 00678aa3: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678aa6: mov dword ptr [edx + 0x244], 0 */ W32((u32)(r_edx+0x244u), 0x0u);
    /* 00678ab0: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678ab3: mov dword ptr [eax + 0x26c], 0 */ W32((u32)(r_eax+0x26cu), 0x0u);
    /* 00678abd: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678ac0: mov dword ptr [ecx + 0x270], 0 */ W32((u32)(r_ecx+0x270u), 0x0u);
    /* 00678aca: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00678ad1: jmp 0x678adc */ goto L_00678adc;
L_00678ad3:; BB(0x00678ad3);
    /* 00678ad3: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678ad6: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00678ad9: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00678adc:; BB(0x00678adc);
    /* 00678adc: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00678ae0: jge 0x678af5 */ if ((fS==fO)) goto L_00678af5;
L_00678ae2:; BB(0x00678ae2);
    /* 00678ae2: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678ae5: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678ae8: mov dword ptr [ecx + eax*4 + 0x274], 0 */ W32((u32)(r_ecx+r_eax*4+0x274u), 0x0u);
    /* 00678af3: jmp 0x678ad3 */ goto L_00678ad3;
L_00678af5:; BB(0x00678af5);
    /* 00678af5: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00678afc: jmp 0x678b07 */ goto L_00678b07;
L_00678afe:; BB(0x00678afe);
    /* 00678afe: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678b01: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00678b04: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_00678b07:; BB(0x00678b07);
    /* 00678b07: cmp dword ptr [ebp - 4], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00678b0b: jge 0x678b31 */ if ((fS==fO)) goto L_00678b31;
L_00678b0d:; BB(0x00678b0d);
    /* 00678b0d: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678b10: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678b13: mov dword ptr [ecx + eax*4 + 0x280], 0 */ W32((u32)(r_ecx+r_eax*4+0x280u), 0x0u);
    /* 00678b1e: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 00678b21: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678b24: mov dword ptr [eax + edx*4 + 0x288], 0 */ W32((u32)(r_eax+r_edx*4+0x288u), 0x0u);
    /* 00678b2f: jmp 0x678afe */ goto L_00678afe;
L_00678b31:; BB(0x00678b31);
    /* 00678b31: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678b34: mov dword ptr [ecx + 0x290], 0 */ W32((u32)(r_ecx+0x290u), 0x0u);
    /* 00678b3e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678b41: mov dword ptr [edx + 0x294], 0 */ W32((u32)(r_edx+0x294u), 0x0u);
    /* 00678b4b: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 00678b4e: mov esp, ebp */ r_esp = r_ebp;
    /* 00678b50: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00678b51: ret  */ FN_RET(0x00678900); r_esp += 4; return;
}

void f_00678b60(void) /* WinAnimation::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x00678b60);
    /* 00678b60: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 00678b61: mov ebp, esp */ r_ebp = r_esp;
    /* 00678b63: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 00678b65: push 0x6ad7bb */ { u32 v = 0x6ad7bbu; r_esp -= 4; W32(r_esp, v); }
    /* 00678b6a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 00678b70: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678b71: sub esp, 0x11c */ {  u32 a = r_esp; u32 b = 0x11cu; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 00678b77: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 00678b7c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 00678b7e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 00678b7f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 00678b82: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 00678b88: mov dword ptr [ebp - 0xcc], ecx */ W32((u32)(r_ebp+0xffffff34u), r_ecx);
    /* 00678b8e: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00678b94: mov dword ptr [eax], 0x6e1fe4 */ W32((u32)(r_eax), 0x6e1fe4u);
    /* 00678b9a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 00678ba1: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678ba7: cmp dword ptr [ecx + 0x194], 0 */ {  u32 a = R32((u32)(r_ecx+0x194u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678bae: je 0x678bfb */ if (fZ) goto L_00678bfb;
L_00678bb0:; BB(0x00678bb0);
    /* 00678bb0: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678bb6: mov eax, dword ptr [edx + 0x194] */ r_eax = R32((u32)(r_edx+0x194u));
    /* 00678bbc: mov dword ptr [ebp - 0x18], eax */ W32((u32)(r_ebp+0xffffffe8u), r_eax);
    /* 00678bbf: mov ecx, dword ptr [ebp - 0x18] */ r_ecx = R32((u32)(r_ebp+0xffffffe8u));
    /* 00678bc2: mov dword ptr [ebp - 0x14], ecx */ W32((u32)(r_ebp+0xffffffecu), r_ecx);
    /* 00678bc5: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678bc9: je 0x678be1 */ if (fZ) goto L_00678be1;
L_00678bcb:; BB(0x00678bcb);
    /* 00678bcb: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00678bcd: mov edx, dword ptr [ebp - 0x14] */ r_edx = R32((u32)(r_ebp+0xffffffecu));
    /* 00678bd0: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00678bd2: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 00678bd5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678bd7: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x678bd9u); call_ind(t); }
    /* 00678bd9: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 00678bdf: jmp 0x678beb */ goto L_00678beb;
L_00678be1:; BB(0x00678be1);
    /* 00678be1: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_00678beb:; BB(0x00678beb);
    /* 00678beb: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00678bf1: mov dword ptr [eax + 0x194], 0 */ W32((u32)(r_eax+0x194u), 0x0u);
L_00678bfb:; BB(0x00678bfb);
    /* 00678bfb: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00678c02: jmp 0x678c0d */ goto L_00678c0d;
L_00678c04:; BB(0x00678c04);
    /* 00678c04: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678c07: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 00678c0a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_00678c0d:; BB(0x00678c0d);
    /* 00678c0d: cmp dword ptr [ebp - 0x10], 0xc */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xcu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00678c11: jge 0x678ce8 */ if ((fS==fO)) goto L_00678ce8;
L_00678c17:; BB(0x00678c17);
    /* 00678c17: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678c1a: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00678c20: cmp dword ptr [eax + edx*4 + 0x198], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x198u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678c28: je 0x678c7d */ if (fZ) goto L_00678c7d;
L_00678c2a:; BB(0x00678c2a);
    /* 00678c2a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678c2d: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678c33: mov eax, dword ptr [edx + ecx*4 + 0x198] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x198u));
    /* 00678c3a: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 00678c3d: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 00678c40: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 00678c43: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678c47: je 0x678c5f */ if (fZ) goto L_00678c5f;
L_00678c49:; BB(0x00678c49);
    /* 00678c49: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00678c4b: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00678c4e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00678c50: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 00678c53: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678c55: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x678c57u); call_ind(t); }
    /* 00678c57: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 00678c5d: jmp 0x678c69 */ goto L_00678c69;
L_00678c5f:; BB(0x00678c5f);
    /* 00678c5f: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_00678c69:; BB(0x00678c69);
    /* 00678c69: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678c6c: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678c72: mov dword ptr [ecx + eax*4 + 0x198], 0 */ W32((u32)(r_ecx+r_eax*4+0x198u), 0x0u);
L_00678c7d:; BB(0x00678c7d);
    /* 00678c7d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678c80: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00678c86: cmp dword ptr [eax + edx*4 + 0x1c8], 0 */ {  u32 a = R32((u32)(r_eax+r_edx*4+0x1c8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678c8e: je 0x678ce3 */ if (fZ) goto L_00678ce3;
L_00678c90:; BB(0x00678c90);
    /* 00678c90: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678c93: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678c99: mov eax, dword ptr [edx + ecx*4 + 0x1c8] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1c8u));
    /* 00678ca0: mov dword ptr [ebp - 0x28], eax */ W32((u32)(r_ebp+0xffffffd8u), r_eax);
    /* 00678ca3: mov ecx, dword ptr [ebp - 0x28] */ r_ecx = R32((u32)(r_ebp+0xffffffd8u));
    /* 00678ca6: mov dword ptr [ebp - 0x24], ecx */ W32((u32)(r_ebp+0xffffffdcu), r_ecx);
    /* 00678ca9: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678cad: je 0x678cc5 */ if (fZ) goto L_00678cc5;
L_00678caf:; BB(0x00678caf);
    /* 00678caf: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00678cb1: mov edx, dword ptr [ebp - 0x24] */ r_edx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00678cb4: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00678cb6: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 00678cb9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678cbb: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x678cbdu); call_ind(t); }
    /* 00678cbd: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 00678cc3: jmp 0x678ccf */ goto L_00678ccf;
L_00678cc5:; BB(0x00678cc5);
    /* 00678cc5: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_00678ccf:; BB(0x00678ccf);
    /* 00678ccf: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678cd2: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678cd8: mov dword ptr [ecx + eax*4 + 0x1c8], 0 */ W32((u32)(r_ecx+r_eax*4+0x1c8u), 0x0u);
L_00678ce3:; BB(0x00678ce3);
    /* 00678ce3: jmp 0x678c04 */ goto L_00678c04;
L_00678ce8:; BB(0x00678ce8);
    /* 00678ce8: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00678cef: jmp 0x678cfa */ goto L_00678cfa;
L_00678cf1:; BB(0x00678cf1);
    /* 00678cf1: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678cf4: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00678cf7: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00678cfa:; BB(0x00678cfa);
    /* 00678cfa: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00678cfe: jge 0x678d68 */ if ((fS==fO)) goto L_00678d68;
L_00678d00:; BB(0x00678d00);
    /* 00678d00: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678d03: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678d09: cmp dword ptr [ecx + eax*4 + 0x1f8], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x1f8u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678d11: je 0x678d66 */ if (fZ) goto L_00678d66;
L_00678d13:; BB(0x00678d13);
    /* 00678d13: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678d16: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00678d1c: mov ecx, dword ptr [eax + edx*4 + 0x1f8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x1f8u));
    /* 00678d23: mov dword ptr [ebp - 0x30], ecx */ W32((u32)(r_ebp+0xffffffd0u), r_ecx);
    /* 00678d26: mov edx, dword ptr [ebp - 0x30] */ r_edx = R32((u32)(r_ebp+0xffffffd0u));
    /* 00678d29: mov dword ptr [ebp - 0x2c], edx */ W32((u32)(r_ebp+0xffffffd4u), r_edx);
    /* 00678d2c: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678d30: je 0x678d48 */ if (fZ) goto L_00678d48;
L_00678d32:; BB(0x00678d32);
    /* 00678d32: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00678d34: mov eax, dword ptr [ebp - 0x2c] */ r_eax = R32((u32)(r_ebp+0xffffffd4u));
    /* 00678d37: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678d39: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 00678d3c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00678d3e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x678d40u); call_ind(t); }
    /* 00678d40: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 00678d46: jmp 0x678d52 */ goto L_00678d52;
L_00678d48:; BB(0x00678d48);
    /* 00678d48: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_00678d52:; BB(0x00678d52);
    /* 00678d52: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678d55: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678d5b: mov dword ptr [edx + ecx*4 + 0x1f8], 0 */ W32((u32)(r_edx+r_ecx*4+0x1f8u), 0x0u);
L_00678d66:; BB(0x00678d66);
    /* 00678d66: jmp 0x678cf1 */ goto L_00678cf1;
L_00678d68:; BB(0x00678d68);
    /* 00678d68: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00678d6e: cmp dword ptr [eax + 0x298], 0 */ {  u32 a = R32((u32)(r_eax+0x298u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678d75: je 0x678dc2 */ if (fZ) goto L_00678dc2;
L_00678d77:; BB(0x00678d77);
    /* 00678d77: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678d7d: mov edx, dword ptr [ecx + 0x298] */ r_edx = R32((u32)(r_ecx+0x298u));
    /* 00678d83: mov dword ptr [ebp - 0x38], edx */ W32((u32)(r_ebp+0xffffffc8u), r_edx);
    /* 00678d86: mov eax, dword ptr [ebp - 0x38] */ r_eax = R32((u32)(r_ebp+0xffffffc8u));
    /* 00678d89: mov dword ptr [ebp - 0x34], eax */ W32((u32)(r_ebp+0xffffffccu), r_eax);
    /* 00678d8c: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678d90: je 0x678da8 */ if (fZ) goto L_00678da8;
L_00678d92:; BB(0x00678d92);
    /* 00678d92: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00678d94: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00678d97: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00678d99: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 00678d9c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00678d9e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x678da0u); call_ind(t); }
    /* 00678da0: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 00678da6: jmp 0x678db2 */ goto L_00678db2;
L_00678da8:; BB(0x00678da8);
    /* 00678da8: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_00678db2:; BB(0x00678db2);
    /* 00678db2: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678db8: mov dword ptr [ecx + 0x298], 0 */ W32((u32)(r_ecx+0x298u), 0x0u);
L_00678dc2:; BB(0x00678dc2);
    /* 00678dc2: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678dc8: cmp dword ptr [edx + 0x208], 0 */ {  u32 a = R32((u32)(r_edx+0x208u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678dcf: je 0x678e1c */ if (fZ) goto L_00678e1c;
L_00678dd1:; BB(0x00678dd1);
    /* 00678dd1: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00678dd7: mov ecx, dword ptr [eax + 0x208] */ r_ecx = R32((u32)(r_eax+0x208u));
    /* 00678ddd: mov dword ptr [ebp - 0x40], ecx */ W32((u32)(r_ebp+0xffffffc0u), r_ecx);
    /* 00678de0: mov edx, dword ptr [ebp - 0x40] */ r_edx = R32((u32)(r_ebp+0xffffffc0u));
    /* 00678de3: mov dword ptr [ebp - 0x3c], edx */ W32((u32)(r_ebp+0xffffffc4u), r_edx);
    /* 00678de6: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678dea: je 0x678e02 */ if (fZ) goto L_00678e02;
L_00678dec:; BB(0x00678dec);
    /* 00678dec: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00678dee: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 00678df1: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678df3: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 00678df6: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00678df8: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x678dfau); call_ind(t); }
    /* 00678dfa: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 00678e00: jmp 0x678e0c */ goto L_00678e0c;
L_00678e02:; BB(0x00678e02);
    /* 00678e02: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_00678e0c:; BB(0x00678e0c);
    /* 00678e0c: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678e12: mov dword ptr [ecx + 0x208], 0 */ W32((u32)(r_ecx+0x208u), 0x0u);
L_00678e1c:; BB(0x00678e1c);
    /* 00678e1c: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678e22: cmp dword ptr [edx + 0x204], 0 */ {  u32 a = R32((u32)(r_edx+0x204u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678e29: je 0x678e76 */ if (fZ) goto L_00678e76;
L_00678e2b:; BB(0x00678e2b);
    /* 00678e2b: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00678e31: mov ecx, dword ptr [eax + 0x204] */ r_ecx = R32((u32)(r_eax+0x204u));
    /* 00678e37: mov dword ptr [ebp - 0x48], ecx */ W32((u32)(r_ebp+0xffffffb8u), r_ecx);
    /* 00678e3a: mov edx, dword ptr [ebp - 0x48] */ r_edx = R32((u32)(r_ebp+0xffffffb8u));
    /* 00678e3d: mov dword ptr [ebp - 0x44], edx */ W32((u32)(r_ebp+0xffffffbcu), r_edx);
    /* 00678e40: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678e44: je 0x678e5c */ if (fZ) goto L_00678e5c;
L_00678e46:; BB(0x00678e46);
    /* 00678e46: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00678e48: mov eax, dword ptr [ebp - 0x44] */ r_eax = R32((u32)(r_ebp+0xffffffbcu));
    /* 00678e4b: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678e4d: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 00678e50: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00678e52: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x678e54u); call_ind(t); }
    /* 00678e54: mov dword ptr [ebp - 0xe8], eax */ W32((u32)(r_ebp+0xffffff18u), r_eax);
    /* 00678e5a: jmp 0x678e66 */ goto L_00678e66;
L_00678e5c:; BB(0x00678e5c);
    /* 00678e5c: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_00678e66:; BB(0x00678e66);
    /* 00678e66: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678e6c: mov dword ptr [ecx + 0x204], 0 */ W32((u32)(r_ecx+0x204u), 0x0u);
L_00678e76:; BB(0x00678e76);
    /* 00678e76: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00678e7d: jmp 0x678e88 */ goto L_00678e88;
L_00678e7f:; BB(0x00678e7f);
    /* 00678e7f: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678e82: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00678e85: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00678e88:; BB(0x00678e88);
    /* 00678e88: cmp dword ptr [ebp - 0x10], 4 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x4u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00678e8c: jge 0x678fc9 */ if ((fS==fO)) goto L_00678fc9;
L_00678e92:; BB(0x00678e92);
    /* 00678e92: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678e95: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678e9b: cmp dword ptr [ecx + eax*4 + 0x20c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x20cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678ea3: je 0x678ef8 */ if (fZ) goto L_00678ef8;
L_00678ea5:; BB(0x00678ea5);
    /* 00678ea5: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678ea8: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00678eae: mov ecx, dword ptr [eax + edx*4 + 0x20c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x20cu));
    /* 00678eb5: mov dword ptr [ebp - 0x50], ecx */ W32((u32)(r_ebp+0xffffffb0u), r_ecx);
    /* 00678eb8: mov edx, dword ptr [ebp - 0x50] */ r_edx = R32((u32)(r_ebp+0xffffffb0u));
    /* 00678ebb: mov dword ptr [ebp - 0x4c], edx */ W32((u32)(r_ebp+0xffffffb4u), r_edx);
    /* 00678ebe: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678ec2: je 0x678eda */ if (fZ) goto L_00678eda;
L_00678ec4:; BB(0x00678ec4);
    /* 00678ec4: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00678ec6: mov eax, dword ptr [ebp - 0x4c] */ r_eax = R32((u32)(r_ebp+0xffffffb4u));
    /* 00678ec9: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678ecb: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 00678ece: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00678ed0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x678ed2u); call_ind(t); }
    /* 00678ed2: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 00678ed8: jmp 0x678ee4 */ goto L_00678ee4;
L_00678eda:; BB(0x00678eda);
    /* 00678eda: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_00678ee4:; BB(0x00678ee4);
    /* 00678ee4: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678ee7: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678eed: mov dword ptr [edx + ecx*4 + 0x20c], 0 */ W32((u32)(r_edx+r_ecx*4+0x20cu), 0x0u);
L_00678ef8:; BB(0x00678ef8);
    /* 00678ef8: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678efb: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678f01: cmp dword ptr [ecx + eax*4 + 0x21c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x21cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678f09: je 0x678f5e */ if (fZ) goto L_00678f5e;
L_00678f0b:; BB(0x00678f0b);
    /* 00678f0b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678f0e: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00678f14: mov ecx, dword ptr [eax + edx*4 + 0x21c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x21cu));
    /* 00678f1b: mov dword ptr [ebp - 0x58], ecx */ W32((u32)(r_ebp+0xffffffa8u), r_ecx);
    /* 00678f1e: mov edx, dword ptr [ebp - 0x58] */ r_edx = R32((u32)(r_ebp+0xffffffa8u));
    /* 00678f21: mov dword ptr [ebp - 0x54], edx */ W32((u32)(r_ebp+0xffffffacu), r_edx);
    /* 00678f24: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678f28: je 0x678f40 */ if (fZ) goto L_00678f40;
L_00678f2a:; BB(0x00678f2a);
    /* 00678f2a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00678f2c: mov eax, dword ptr [ebp - 0x54] */ r_eax = R32((u32)(r_ebp+0xffffffacu));
    /* 00678f2f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678f31: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 00678f34: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00678f36: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x678f38u); call_ind(t); }
    /* 00678f38: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 00678f3e: jmp 0x678f4a */ goto L_00678f4a;
L_00678f40:; BB(0x00678f40);
    /* 00678f40: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
L_00678f4a:; BB(0x00678f4a);
    /* 00678f4a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678f4d: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678f53: mov dword ptr [edx + ecx*4 + 0x21c], 0 */ W32((u32)(r_edx+r_ecx*4+0x21cu), 0x0u);
L_00678f5e:; BB(0x00678f5e);
    /* 00678f5e: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678f61: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678f67: cmp dword ptr [ecx + eax*4 + 0x25c], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x25cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678f6f: je 0x678fc4 */ if (fZ) goto L_00678fc4;
L_00678f71:; BB(0x00678f71);
    /* 00678f71: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678f74: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00678f7a: mov ecx, dword ptr [eax + edx*4 + 0x25c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x25cu));
    /* 00678f81: mov dword ptr [ebp - 0x60], ecx */ W32((u32)(r_ebp+0xffffffa0u), r_ecx);
    /* 00678f84: mov edx, dword ptr [ebp - 0x60] */ r_edx = R32((u32)(r_ebp+0xffffffa0u));
    /* 00678f87: mov dword ptr [ebp - 0x5c], edx */ W32((u32)(r_ebp+0xffffffa4u), r_edx);
    /* 00678f8a: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678f8e: je 0x678fa6 */ if (fZ) goto L_00678fa6;
L_00678f90:; BB(0x00678f90);
    /* 00678f90: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00678f92: mov eax, dword ptr [ebp - 0x5c] */ r_eax = R32((u32)(r_ebp+0xffffffa4u));
    /* 00678f95: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00678f97: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 00678f9a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00678f9c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x678f9eu); call_ind(t); }
    /* 00678f9e: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 00678fa4: jmp 0x678fb0 */ goto L_00678fb0;
L_00678fa6:; BB(0x00678fa6);
    /* 00678fa6: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_00678fb0:; BB(0x00678fb0);
    /* 00678fb0: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678fb3: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678fb9: mov dword ptr [edx + ecx*4 + 0x25c], 0 */ W32((u32)(r_edx+r_ecx*4+0x25cu), 0x0u);
L_00678fc4:; BB(0x00678fc4);
    /* 00678fc4: jmp 0x678e7f */ goto L_00678e7f;
L_00678fc9:; BB(0x00678fc9);
    /* 00678fc9: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00678fd0: jmp 0x678fdb */ goto L_00678fdb;
L_00678fd2:; BB(0x00678fd2);
    /* 00678fd2: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678fd5: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 00678fd8: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_00678fdb:; BB(0x00678fdb);
    /* 00678fdb: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00678fdf: jge 0x679049 */ if ((fS==fO)) goto L_00679049;
L_00678fe1:; BB(0x00678fe1);
    /* 00678fe1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678fe4: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678fea: cmp dword ptr [edx + ecx*4 + 0x248], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x248u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00678ff2: je 0x679047 */ if (fZ) goto L_00679047;
L_00678ff4:; BB(0x00678ff4);
    /* 00678ff4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00678ff7: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00678ffd: mov edx, dword ptr [ecx + eax*4 + 0x248] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x248u));
    /* 00679004: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 00679007: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0067900a: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0067900d: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679011: je 0x679029 */ if (fZ) goto L_00679029;
L_00679013:; BB(0x00679013);
    /* 00679013: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679015: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 00679018: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067901a: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0067901d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067901f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679021u); call_ind(t); }
    /* 00679021: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 00679027: jmp 0x679033 */ goto L_00679033;
L_00679029:; BB(0x00679029);
    /* 00679029: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_00679033:; BB(0x00679033);
    /* 00679033: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00679036: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0067903c: mov dword ptr [edx + ecx*4 + 0x248], 0 */ W32((u32)(r_edx+r_ecx*4+0x248u), 0x0u);
L_00679047:; BB(0x00679047);
    /* 00679047: jmp 0x678fd2 */ goto L_00678fd2;
L_00679049:; BB(0x00679049);
    /* 00679049: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0067904f: cmp dword ptr [eax + 0x22c], 0 */ {  u32 a = R32((u32)(r_eax+0x22cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679056: je 0x6790a3 */ if (fZ) goto L_006790a3;
L_00679058:; BB(0x00679058);
    /* 00679058: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0067905e: mov edx, dword ptr [ecx + 0x22c] */ r_edx = R32((u32)(r_ecx+0x22cu));
    /* 00679064: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 00679067: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0067906a: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0067906d: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679071: je 0x679089 */ if (fZ) goto L_00679089;
L_00679073:; BB(0x00679073);
    /* 00679073: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679075: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 00679078: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067907a: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0067907d: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067907f: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679081u); call_ind(t); }
    /* 00679081: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 00679087: jmp 0x679093 */ goto L_00679093;
L_00679089:; BB(0x00679089);
    /* 00679089: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
L_00679093:; BB(0x00679093);
    /* 00679093: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00679099: mov dword ptr [ecx + 0x22c], 0 */ W32((u32)(r_ecx+0x22cu), 0x0u);
L_006790a3:; BB(0x006790a3);
    /* 006790a3: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 006790a9: cmp dword ptr [edx + 0x230], 0 */ {  u32 a = R32((u32)(r_edx+0x230u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006790b0: je 0x6790fd */ if (fZ) goto L_006790fd;
L_006790b2:; BB(0x006790b2);
    /* 006790b2: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 006790b8: mov ecx, dword ptr [eax + 0x230] */ r_ecx = R32((u32)(r_eax+0x230u));
    /* 006790be: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 006790c1: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 006790c4: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 006790c7: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006790cb: je 0x6790e3 */ if (fZ) goto L_006790e3;
L_006790cd:; BB(0x006790cd);
    /* 006790cd: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006790cf: mov eax, dword ptr [ebp - 0x74] */ r_eax = R32((u32)(r_ebp+0xffffff8cu));
    /* 006790d2: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006790d4: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 006790d7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006790d9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6790dbu); call_ind(t); }
    /* 006790db: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 006790e1: jmp 0x6790ed */ goto L_006790ed;
L_006790e3:; BB(0x006790e3);
    /* 006790e3: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
L_006790ed:; BB(0x006790ed);
    /* 006790ed: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 006790f3: mov dword ptr [ecx + 0x230], 0 */ W32((u32)(r_ecx+0x230u), 0x0u);
L_006790fd:; BB(0x006790fd);
    /* 006790fd: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00679103: cmp dword ptr [edx + 0x240], 0 */ {  u32 a = R32((u32)(r_edx+0x240u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067910a: je 0x679157 */ if (fZ) goto L_00679157;
L_0067910c:; BB(0x0067910c);
    /* 0067910c: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00679112: mov ecx, dword ptr [eax + 0x240] */ r_ecx = R32((u32)(r_eax+0x240u));
    /* 00679118: mov dword ptr [ebp - 0x80], ecx */ W32((u32)(r_ebp+0xffffff80u), r_ecx);
    /* 0067911b: mov edx, dword ptr [ebp - 0x80] */ r_edx = R32((u32)(r_ebp+0xffffff80u));
    /* 0067911e: mov dword ptr [ebp - 0x7c], edx */ W32((u32)(r_ebp+0xffffff84u), r_edx);
    /* 00679121: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679125: je 0x67913d */ if (fZ) goto L_0067913d;
L_00679127:; BB(0x00679127);
    /* 00679127: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679129: mov eax, dword ptr [ebp - 0x7c] */ r_eax = R32((u32)(r_ebp+0xffffff84u));
    /* 0067912c: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0067912e: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 00679131: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00679133: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679135u); call_ind(t); }
    /* 00679135: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 0067913b: jmp 0x679147 */ goto L_00679147;
L_0067913d:; BB(0x0067913d);
    /* 0067913d: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_00679147:; BB(0x00679147);
    /* 00679147: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0067914d: mov dword ptr [ecx + 0x240], 0 */ W32((u32)(r_ecx+0x240u), 0x0u);
L_00679157:; BB(0x00679157);
    /* 00679157: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0067915e: jmp 0x679169 */ goto L_00679169;
L_00679160:; BB(0x00679160);
    /* 00679160: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00679163: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 00679166: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00679169:; BB(0x00679169);
    /* 00679169: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0067916d: jge 0x6791ec */ if ((fS==fO)) goto L_006791ec;
L_0067916f:; BB(0x0067916f);
    /* 0067916f: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 00679172: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00679178: cmp dword ptr [ecx + eax*4 + 0x234], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x234u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679180: je 0x6791e7 */ if (fZ) goto L_006791e7;
L_00679182:; BB(0x00679182);
    /* 00679182: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00679185: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0067918b: mov ecx, dword ptr [eax + edx*4 + 0x234] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x234u));
    /* 00679192: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 00679198: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0067919e: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 006791a4: cmp dword ptr [ebp - 0x84], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006791ab: je 0x6791c9 */ if (fZ) goto L_006791c9;
L_006791ad:; BB(0x006791ad);
    /* 006791ad: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006791af: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 006791b5: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006791b7: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 006791bd: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006791bf: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6791c1u); call_ind(t); }
    /* 006791c1: mov dword ptr [ebp - 0x108], eax */ W32((u32)(r_ebp+0xfffffef8u), r_eax);
    /* 006791c7: jmp 0x6791d3 */ goto L_006791d3;
L_006791c9:; BB(0x006791c9);
    /* 006791c9: mov dword ptr [ebp - 0x108], 0 */ W32((u32)(r_ebp+0xfffffef8u), 0x0u);
L_006791d3:; BB(0x006791d3);
    /* 006791d3: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006791d6: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 006791dc: mov dword ptr [edx + ecx*4 + 0x234], 0 */ W32((u32)(r_edx+r_ecx*4+0x234u), 0x0u);
L_006791e7:; BB(0x006791e7);
    /* 006791e7: jmp 0x679160 */ goto L_00679160;
L_006791ec:; BB(0x006791ec);
    /* 006791ec: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 006791f2: cmp dword ptr [eax + 0x244], 0 */ {  u32 a = R32((u32)(r_eax+0x244u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006791f9: je 0x679258 */ if (fZ) goto L_00679258;
L_006791fb:; BB(0x006791fb);
    /* 006791fb: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00679201: mov edx, dword ptr [ecx + 0x244] */ r_edx = R32((u32)(r_ecx+0x244u));
    /* 00679207: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 0067920d: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 00679213: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 00679219: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679220: je 0x67923e */ if (fZ) goto L_0067923e;
L_00679222:; BB(0x00679222);
    /* 00679222: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679224: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0067922a: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0067922c: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 00679232: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00679234: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679236u); call_ind(t); }
    /* 00679236: mov dword ptr [ebp - 0x10c], eax */ W32((u32)(r_ebp+0xfffffef4u), r_eax);
    /* 0067923c: jmp 0x679248 */ goto L_00679248;
L_0067923e:; BB(0x0067923e);
    /* 0067923e: mov dword ptr [ebp - 0x10c], 0 */ W32((u32)(r_ebp+0xfffffef4u), 0x0u);
L_00679248:; BB(0x00679248);
    /* 00679248: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 0067924e: mov dword ptr [ecx + 0x244], 0 */ W32((u32)(r_ecx+0x244u), 0x0u);
L_00679258:; BB(0x00679258);
    /* 00679258: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0067925e: cmp dword ptr [edx + 0x26c], 0 */ {  u32 a = R32((u32)(r_edx+0x26cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679265: je 0x6792c4 */ if (fZ) goto L_006792c4;
L_00679267:; BB(0x00679267);
    /* 00679267: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 0067926d: mov ecx, dword ptr [eax + 0x26c] */ r_ecx = R32((u32)(r_eax+0x26cu));
    /* 00679273: mov dword ptr [ebp - 0x98], ecx */ W32((u32)(r_ebp+0xffffff68u), r_ecx);
    /* 00679279: mov edx, dword ptr [ebp - 0x98] */ r_edx = R32((u32)(r_ebp+0xffffff68u));
    /* 0067927f: mov dword ptr [ebp - 0x94], edx */ W32((u32)(r_ebp+0xffffff6cu), r_edx);
    /* 00679285: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067928c: je 0x6792aa */ if (fZ) goto L_006792aa;
L_0067928e:; BB(0x0067928e);
    /* 0067928e: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679290: mov eax, dword ptr [ebp - 0x94] */ r_eax = R32((u32)(r_ebp+0xffffff6cu));
    /* 00679296: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00679298: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0067929e: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006792a0: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6792a2u); call_ind(t); }
    /* 006792a2: mov dword ptr [ebp - 0x110], eax */ W32((u32)(r_ebp+0xfffffef0u), r_eax);
    /* 006792a8: jmp 0x6792b4 */ goto L_006792b4;
L_006792aa:; BB(0x006792aa);
    /* 006792aa: mov dword ptr [ebp - 0x110], 0 */ W32((u32)(r_ebp+0xfffffef0u), 0x0u);
L_006792b4:; BB(0x006792b4);
    /* 006792b4: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 006792ba: mov dword ptr [ecx + 0x26c], 0 */ W32((u32)(r_ecx+0x26cu), 0x0u);
L_006792c4:; BB(0x006792c4);
    /* 006792c4: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 006792ca: cmp dword ptr [edx + 0x270], 0 */ {  u32 a = R32((u32)(r_edx+0x270u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006792d1: je 0x679330 */ if (fZ) goto L_00679330;
L_006792d3:; BB(0x006792d3);
    /* 006792d3: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 006792d9: mov ecx, dword ptr [eax + 0x270] */ r_ecx = R32((u32)(r_eax+0x270u));
    /* 006792df: mov dword ptr [ebp - 0xa0], ecx */ W32((u32)(r_ebp+0xffffff60u), r_ecx);
    /* 006792e5: mov edx, dword ptr [ebp - 0xa0] */ r_edx = R32((u32)(r_ebp+0xffffff60u));
    /* 006792eb: mov dword ptr [ebp - 0x9c], edx */ W32((u32)(r_ebp+0xffffff64u), r_edx);
    /* 006792f1: cmp dword ptr [ebp - 0x9c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006792f8: je 0x679316 */ if (fZ) goto L_00679316;
L_006792fa:; BB(0x006792fa);
    /* 006792fa: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 006792fc: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 00679302: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00679304: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0067930a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067930c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67930eu); call_ind(t); }
    /* 0067930e: mov dword ptr [ebp - 0x114], eax */ W32((u32)(r_ebp+0xfffffeecu), r_eax);
    /* 00679314: jmp 0x679320 */ goto L_00679320;
L_00679316:; BB(0x00679316);
    /* 00679316: mov dword ptr [ebp - 0x114], 0 */ W32((u32)(r_ebp+0xfffffeecu), 0x0u);
L_00679320:; BB(0x00679320);
    /* 00679320: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00679326: mov dword ptr [ecx + 0x270], 0 */ W32((u32)(r_ecx+0x270u), 0x0u);
L_00679330:; BB(0x00679330);
    /* 00679330: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 00679337: jmp 0x679342 */ goto L_00679342;
L_00679339:; BB(0x00679339);
    /* 00679339: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067933c: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0067933f: mov dword ptr [ebp - 0x10], edx */ W32((u32)(r_ebp+0xfffffff0u), r_edx);
L_00679342:; BB(0x00679342);
    /* 00679342: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 00679346: jge 0x6793c5 */ if ((fS==fO)) goto L_006793c5;
L_00679348:; BB(0x00679348);
    /* 00679348: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067934b: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00679351: cmp dword ptr [ecx + eax*4 + 0x274], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x274u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679359: je 0x6793c0 */ if (fZ) goto L_006793c0;
L_0067935b:; BB(0x0067935b);
    /* 0067935b: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067935e: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00679364: mov ecx, dword ptr [eax + edx*4 + 0x274] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x274u));
    /* 0067936b: mov dword ptr [ebp - 0xa8], ecx */ W32((u32)(r_ebp+0xffffff58u), r_ecx);
    /* 00679371: mov edx, dword ptr [ebp - 0xa8] */ r_edx = R32((u32)(r_ebp+0xffffff58u));
    /* 00679377: mov dword ptr [ebp - 0xa4], edx */ W32((u32)(r_ebp+0xffffff5cu), r_edx);
    /* 0067937d: cmp dword ptr [ebp - 0xa4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679384: je 0x6793a2 */ if (fZ) goto L_006793a2;
L_00679386:; BB(0x00679386);
    /* 00679386: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679388: mov eax, dword ptr [ebp - 0xa4] */ r_eax = R32((u32)(r_ebp+0xffffff5cu));
    /* 0067938e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00679390: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 00679396: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00679398: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67939au); call_ind(t); }
    /* 0067939a: mov dword ptr [ebp - 0x118], eax */ W32((u32)(r_ebp+0xfffffee8u), r_eax);
    /* 006793a0: jmp 0x6793ac */ goto L_006793ac;
L_006793a2:; BB(0x006793a2);
    /* 006793a2: mov dword ptr [ebp - 0x118], 0 */ W32((u32)(r_ebp+0xfffffee8u), 0x0u);
L_006793ac:; BB(0x006793ac);
    /* 006793ac: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006793af: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 006793b5: mov dword ptr [edx + ecx*4 + 0x274], 0 */ W32((u32)(r_edx+r_ecx*4+0x274u), 0x0u);
L_006793c0:; BB(0x006793c0);
    /* 006793c0: jmp 0x679339 */ goto L_00679339;
L_006793c5:; BB(0x006793c5);
    /* 006793c5: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 006793cc: jmp 0x6793d7 */ goto L_006793d7;
L_006793ce:; BB(0x006793ce);
    /* 006793ce: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006793d1: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 006793d4: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_006793d7:; BB(0x006793d7);
    /* 006793d7: cmp dword ptr [ebp - 0x10], 2 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x2u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 006793db: jge 0x6794d6 */ if ((fS==fO)) goto L_006794d6;
L_006793e1:; BB(0x006793e1);
    /* 006793e1: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006793e4: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 006793ea: cmp dword ptr [edx + ecx*4 + 0x280], 0 */ {  u32 a = R32((u32)(r_edx+r_ecx*4+0x280u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006793f2: je 0x679459 */ if (fZ) goto L_00679459;
L_006793f4:; BB(0x006793f4);
    /* 006793f4: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 006793f7: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 006793fd: mov edx, dword ptr [ecx + eax*4 + 0x280] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x280u));
    /* 00679404: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 0067940a: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 00679410: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 00679416: cmp dword ptr [ebp - 0xac], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067941d: je 0x67943b */ if (fZ) goto L_0067943b;
L_0067941f:; BB(0x0067941f);
    /* 0067941f: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679421: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 00679427: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00679429: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 0067942f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00679431: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679433u); call_ind(t); }
    /* 00679433: mov dword ptr [ebp - 0x11c], eax */ W32((u32)(r_ebp+0xfffffee4u), r_eax);
    /* 00679439: jmp 0x679445 */ goto L_00679445;
L_0067943b:; BB(0x0067943b);
    /* 0067943b: mov dword ptr [ebp - 0x11c], 0 */ W32((u32)(r_ebp+0xfffffee4u), 0x0u);
L_00679445:; BB(0x00679445);
    /* 00679445: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 00679448: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 0067944e: mov dword ptr [edx + ecx*4 + 0x280], 0 */ W32((u32)(r_edx+r_ecx*4+0x280u), 0x0u);
L_00679459:; BB(0x00679459);
    /* 00679459: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067945c: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00679462: cmp dword ptr [ecx + eax*4 + 0x288], 0 */ {  u32 a = R32((u32)(r_ecx+r_eax*4+0x288u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067946a: je 0x6794d1 */ if (fZ) goto L_006794d1;
L_0067946c:; BB(0x0067946c);
    /* 0067946c: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0067946f: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00679475: mov ecx, dword ptr [eax + edx*4 + 0x288] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x288u));
    /* 0067947c: mov dword ptr [ebp - 0xb8], ecx */ W32((u32)(r_ebp+0xffffff48u), r_ecx);
    /* 00679482: mov edx, dword ptr [ebp - 0xb8] */ r_edx = R32((u32)(r_ebp+0xffffff48u));
    /* 00679488: mov dword ptr [ebp - 0xb4], edx */ W32((u32)(r_ebp+0xffffff4cu), r_edx);
    /* 0067948e: cmp dword ptr [ebp - 0xb4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff4cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679495: je 0x6794b3 */ if (fZ) goto L_006794b3;
L_00679497:; BB(0x00679497);
    /* 00679497: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 00679499: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0067949f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 006794a1: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 006794a7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 006794a9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x6794abu); call_ind(t); }
    /* 006794ab: mov dword ptr [ebp - 0x120], eax */ W32((u32)(r_ebp+0xfffffee0u), r_eax);
    /* 006794b1: jmp 0x6794bd */ goto L_006794bd;
L_006794b3:; BB(0x006794b3);
    /* 006794b3: mov dword ptr [ebp - 0x120], 0 */ W32((u32)(r_ebp+0xfffffee0u), 0x0u);
L_006794bd:; BB(0x006794bd);
    /* 006794bd: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 006794c0: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 006794c6: mov dword ptr [edx + ecx*4 + 0x288], 0 */ W32((u32)(r_edx+r_ecx*4+0x288u), 0x0u);
L_006794d1:; BB(0x006794d1);
    /* 006794d1: jmp 0x6793ce */ goto L_006793ce;
L_006794d6:; BB(0x006794d6);
    /* 006794d6: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 006794dc: cmp dword ptr [eax + 0x290], 0 */ {  u32 a = R32((u32)(r_eax+0x290u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 006794e3: je 0x679542 */ if (fZ) goto L_00679542;
L_006794e5:; BB(0x006794e5);
    /* 006794e5: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 006794eb: mov edx, dword ptr [ecx + 0x290] */ r_edx = R32((u32)(r_ecx+0x290u));
    /* 006794f1: mov dword ptr [ebp - 0xc0], edx */ W32((u32)(r_ebp+0xffffff40u), r_edx);
    /* 006794f7: mov eax, dword ptr [ebp - 0xc0] */ r_eax = R32((u32)(r_ebp+0xffffff40u));
    /* 006794fd: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 00679503: cmp dword ptr [ebp - 0xbc], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff44u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067950a: je 0x679528 */ if (fZ) goto L_00679528;
L_0067950c:; BB(0x0067950c);
    /* 0067950c: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067950e: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 00679514: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00679516: mov ecx, dword ptr [ebp - 0xbc] */ r_ecx = R32((u32)(r_ebp+0xffffff44u));
    /* 0067951c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067951e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x679520u); call_ind(t); }
    /* 00679520: mov dword ptr [ebp - 0x124], eax */ W32((u32)(r_ebp+0xfffffedcu), r_eax);
    /* 00679526: jmp 0x679532 */ goto L_00679532;
L_00679528:; BB(0x00679528);
    /* 00679528: mov dword ptr [ebp - 0x124], 0 */ W32((u32)(r_ebp+0xfffffedcu), 0x0u);
L_00679532:; BB(0x00679532);
    /* 00679532: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 00679538: mov dword ptr [ecx + 0x290], 0 */ W32((u32)(r_ecx+0x290u), 0x0u);
L_00679542:; BB(0x00679542);
    /* 00679542: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 00679548: cmp dword ptr [edx + 0x294], 0 */ {  u32 a = R32((u32)(r_edx+0x294u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0067954f: je 0x6795ae */ if (fZ) goto L_006795ae;
L_00679551:; BB(0x00679551);
    /* 00679551: mov eax, dword ptr [ebp - 0xcc] */ r_eax = R32((u32)(r_ebp+0xffffff34u));
    /* 00679557: mov ecx, dword ptr [eax + 0x294] */ r_ecx = R32((u32)(r_eax+0x294u));
    /* 0067955d: mov dword ptr [ebp - 0xc8], ecx */ W32((u32)(r_ebp+0xffffff38u), r_ecx);
    /* 00679563: mov edx, dword ptr [ebp - 0xc8] */ r_edx = R32((u32)(r_ebp+0xffffff38u));
    /* 00679569: mov dword ptr [ebp - 0xc4], edx */ W32((u32)(r_ebp+0xffffff3cu), r_edx);
    /* 0067956f: cmp dword ptr [ebp - 0xc4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff3cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00679576: je 0x679594 */ if (fZ) goto L_00679594;
L_00679578:; BB(0x00679578);
    /* 00679578: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0067957a: mov eax, dword ptr [ebp - 0xc4] */ r_eax = R32((u32)(r_ebp+0xffffff3cu));
    /* 00679580: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 00679582: mov ecx, dword ptr [ebp - 0xc4] */ r_ecx = R32((u32)(r_ebp+0xffffff3cu));
    /* 00679588: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0067958a: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x67958cu); call_ind(t); }
    /* 0067958c: mov dword ptr [ebp - 0x128], eax */ W32((u32)(r_ebp+0xfffffed8u), r_eax);
    /* 00679592: jmp 0x67959e */ goto L_0067959e;
L_00679594:; BB(0x00679594);
    /* 00679594: mov dword ptr [ebp - 0x128], 0 */ W32((u32)(r_ebp+0xfffffed8u), 0x0u);
L_0067959e:; BB(0x0067959e);
    /* 0067959e: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 006795a4: mov dword ptr [ecx + 0x294], 0 */ W32((u32)(r_ecx+0x294u), 0x0u);
L_006795ae:; BB(0x006795ae);
    /* 006795ae: mov edx, dword ptr [ebp - 0xcc] */ r_edx = R32((u32)(r_ebp+0xffffff34u));
    /* 006795b4: mov dword ptr [edx + 0x190], 0 */ W32((u32)(r_edx+0x190u), 0x0u);
    /* 006795be: push 0 */ { u32 v = 0x0u; r_esp -= 4; W32(r_esp, v); }
    /* 006795c0: mov ecx, dword ptr [0x162ee84] */ r_ecx = R32((u32)(0x162ee84u));
    /* 006795c6: call 0x5f45d0 */ r_esp -= 4; W32(r_esp, 0x6795cbu); f_005f45d0();
    /* 006795cb: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 006795d2: mov ecx, dword ptr [ebp - 0xcc] */ r_ecx = R32((u32)(r_ebp+0xffffff34u));
    /* 006795d8: call 0x5f5fa0 */ r_esp -= 4; W32(r_esp, 0x6795ddu); f_005f5fa0();
    /* 006795dd: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 006795e0: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 006795e7: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 006795e8: mov esp, ebp */ r_esp = r_ebp;
    /* 006795ea: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 006795eb: ret  */ FN_RET(0x00678b60); r_esp += 4; return;
}

