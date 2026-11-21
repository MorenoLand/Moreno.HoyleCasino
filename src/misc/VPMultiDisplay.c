#include "protos.h"

void f_0055f930(void) /* VPMultiDisplay::ctor */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055f930);
    /* 0055f930: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055f931: mov ebp, esp */ r_ebp = r_esp;
    /* 0055f933: sub esp, 8 */ {  u32 a = r_esp; u32 b = 0x8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055f936: mov dword ptr [ebp - 8], ecx */ W32((u32)(r_ebp+0xfffffff8u), r_ecx);
    /* 0055f939: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055f93c: call 0x5e9e20 */ r_esp -= 4; W32(r_esp, 0x55f941u); f_005e9e20();
    /* 0055f941: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055f944: mov dword ptr [eax], 0x6c96fc */ W32((u32)(r_eax), 0x6c96fcu);
    /* 0055f94a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055f951: jmp 0x55f95c */ goto L_0055f95c;
L_0055f953:; BB(0x0055f953);
    /* 0055f953: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055f956: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055f959: mov dword ptr [ebp - 4], ecx */ W32((u32)(r_ebp+0xfffffffcu), r_ecx);
L_0055f95c:; BB(0x0055f95c);
    /* 0055f95c: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055f960: jge 0x55f98e */ if ((fS==fO)) goto L_0055f98e;
L_0055f962:; BB(0x0055f962);
    /* 0055f962: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055f965: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055f968: mov dword ptr [eax + edx*4 + 8], 0 */ W32((u32)(r_eax+r_edx*4+0x8u), 0x0u);
    /* 0055f970: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055f973: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055f976: mov dword ptr [edx + ecx*4 + 0x1c], 0 */ W32((u32)(r_edx+r_ecx*4+0x1cu), 0x0u);
    /* 0055f97e: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055f981: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055f984: mov dword ptr [ecx + eax*4 + 0x4c], 0 */ W32((u32)(r_ecx+r_eax*4+0x4cu), 0x0u);
    /* 0055f98c: jmp 0x55f953 */ goto L_0055f953;
L_0055f98e:; BB(0x0055f98e);
    /* 0055f98e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055f991: mov dword ptr [edx + 0x74], 0 */ W32((u32)(r_edx+0x74u), 0x0u);
    /* 0055f998: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055f99b: mov dword ptr [eax + 0x78], 0 */ W32((u32)(r_eax+0x78u), 0x0u);
    /* 0055f9a2: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055f9a5: mov dword ptr [ecx + 0x7c], 0 */ W32((u32)(r_ecx+0x7cu), 0x0u);
    /* 0055f9ac: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055f9af: mov dword ptr [edx + 0x80], 0 */ W32((u32)(r_edx+0x80u), 0x0u);
    /* 0055f9b9: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055f9bc: mov dword ptr [eax + 0x84], 0 */ W32((u32)(r_eax+0x84u), 0x0u);
    /* 0055f9c6: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055f9c9: mov dword ptr [ecx + 0x88], 0 */ W32((u32)(r_ecx+0x88u), 0x0u);
    /* 0055f9d3: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055f9da: jmp 0x55f9e5 */ goto L_0055f9e5;
L_0055f9dc:; BB(0x0055f9dc);
    /* 0055f9dc: mov edx, dword ptr [ebp - 4] */ r_edx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055f9df: add edx, 1 */ {  u32 a = r_edx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_edx = r;  }
    /* 0055f9e2: mov dword ptr [ebp - 4], edx */ W32((u32)(r_ebp+0xfffffffcu), r_edx);
L_0055f9e5:; BB(0x0055f9e5);
    /* 0055f9e5: cmp dword ptr [ebp - 4], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055f9e9: jge 0x55f9fe */ if ((fS==fO)) goto L_0055f9fe;
L_0055f9eb:; BB(0x0055f9eb);
    /* 0055f9eb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055f9ee: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055f9f1: mov dword ptr [ecx + eax*4 + 0x8c], 0 */ W32((u32)(r_ecx+r_eax*4+0x8cu), 0x0u);
    /* 0055f9fc: jmp 0x55f9dc */ goto L_0055f9dc;
L_0055f9fe:; BB(0x0055f9fe);
    /* 0055f9fe: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055fa01: mov dword ptr [edx + 0xb8], 0 */ W32((u32)(r_edx+0xb8u), 0x0u);
    /* 0055fa0b: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055fa12: jmp 0x55fa1d */ goto L_0055fa1d;
L_0055fa14:; BB(0x0055fa14);
    /* 0055fa14: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055fa17: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055fa1a: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055fa1d:; BB(0x0055fa1d);
    /* 0055fa1d: cmp dword ptr [ebp - 4], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055fa21: jge 0x55fa36 */ if ((fS==fO)) goto L_0055fa36;
L_0055fa23:; BB(0x0055fa23);
    /* 0055fa23: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055fa26: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055fa29: mov dword ptr [edx + ecx*4 + 0xbc], 0 */ W32((u32)(r_edx+r_ecx*4+0xbcu), 0x0u);
    /* 0055fa34: jmp 0x55fa14 */ goto L_0055fa14;
L_0055fa36:; BB(0x0055fa36);
    /* 0055fa36: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055fa39: mov dword ptr [eax + 0xc8], 0 */ W32((u32)(r_eax+0xc8u), 0x0u);
    /* 0055fa43: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055fa46: mov dword ptr [ecx + 0xcc], 0 */ W32((u32)(r_ecx+0xccu), 0x0u);
    /* 0055fa50: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055fa53: mov dword ptr [edx + 0xd0], 0 */ W32((u32)(r_edx+0xd0u), 0x0u);
    /* 0055fa5d: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055fa60: mov dword ptr [eax + 0xd4], 0 */ W32((u32)(r_eax+0xd4u), 0x0u);
    /* 0055fa6a: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055fa6d: mov dword ptr [ecx + 0xd8], 0 */ W32((u32)(r_ecx+0xd8u), 0x0u);
    /* 0055fa77: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055fa7a: mov dword ptr [edx + 0xdc], 0 */ W32((u32)(r_edx+0xdcu), 0x0u);
    /* 0055fa84: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055fa87: mov dword ptr [eax + 0xe0], 0 */ W32((u32)(r_eax+0xe0u), 0x0u);
    /* 0055fa91: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055fa94: mov dword ptr [ecx + 0xe4], 0 */ W32((u32)(r_ecx+0xe4u), 0x0u);
    /* 0055fa9e: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055faa1: mov dword ptr [edx + 0xe8], 0 */ W32((u32)(r_edx+0xe8u), 0x0u);
    /* 0055faab: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055faae: mov dword ptr [eax + 0xec], 0 */ W32((u32)(r_eax+0xecu), 0x0u);
    /* 0055fab8: mov ecx, dword ptr [ebp - 8] */ r_ecx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055fabb: mov dword ptr [ecx + 0xf0], 0 */ W32((u32)(r_ecx+0xf0u), 0x0u);
    /* 0055fac5: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055fac8: mov dword ptr [edx + 0xf4], 0 */ W32((u32)(r_edx+0xf4u), 0x0u);
    /* 0055fad2: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055fad9: jmp 0x55fae4 */ goto L_0055fae4;
L_0055fadb:; BB(0x0055fadb);
    /* 0055fadb: mov eax, dword ptr [ebp - 4] */ r_eax = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055fade: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055fae1: mov dword ptr [ebp - 4], eax */ W32((u32)(r_ebp+0xfffffffcu), r_eax);
L_0055fae4:; BB(0x0055fae4);
    /* 0055fae4: cmp dword ptr [ebp - 4], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffffcu)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055fae8: jge 0x55fafa */ if ((fS==fO)) goto L_0055fafa;
L_0055faea:; BB(0x0055faea);
    /* 0055faea: mov ecx, dword ptr [ebp - 4] */ r_ecx = R32((u32)(r_ebp+0xfffffffcu));
    /* 0055faed: mov edx, dword ptr [ebp - 8] */ r_edx = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055faf0: mov dword ptr [edx + ecx*4 + 0x60], 0 */ W32((u32)(r_edx+r_ecx*4+0x60u), 0x0u);
    /* 0055faf8: jmp 0x55fadb */ goto L_0055fadb;
L_0055fafa:; BB(0x0055fafa);
    /* 0055fafa: mov eax, dword ptr [ebp - 8] */ r_eax = R32((u32)(r_ebp+0xfffffff8u));
    /* 0055fafd: mov esp, ebp */ r_esp = r_ebp;
    /* 0055faff: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 0055fb00: ret  */ FN_RET(0x0055f930); r_esp += 4; return;
}

void f_0055fb10(void) /* VPMultiDisplay::ctor_0 */
{
    int fZ = 0, fS = 0, fC = 0, fO = 0, fP = 0, fA = 0; (void)fZ; (void)fS; (void)fC; (void)fO; (void)fP; (void)fA;
    FN_ENTER(0x0055fb10);
    /* 0055fb10: push ebp */ { u32 v = r_ebp; r_esp -= 4; W32(r_esp, v); }
    /* 0055fb11: mov ebp, esp */ r_ebp = r_esp;
    /* 0055fb13: push -1 */ { u32 v = 0xffffffffu; r_esp -= 4; W32(r_esp, v); }
    /* 0055fb15: push 0x6a57db */ { u32 v = 0x6a57dbu; r_esp -= 4; W32(r_esp, v); }
    /* 0055fb1a: mov eax, dword ptr fs:[0] */ r_eax = R32((u32)(TEB));
    /* 0055fb20: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055fb21: sub esp, 0xf8 */ {  u32 a = r_esp; u32 b = 0xf8u; u32 r = (a - b) & 0xffffffffu; r_esp = r;  }
    /* 0055fb27: mov eax, dword ptr [0x781870] */ r_eax = R32((u32)(0x781870u));
    /* 0055fb2c: xor eax, ebp */ {  u32 a = r_eax; u32 b = r_ebp; u32 r = (a ^ b) & 0xffffffffu; r_eax = r;  }
    /* 0055fb2e: push eax */ { u32 v = r_eax; r_esp -= 4; W32(r_esp, v); }
    /* 0055fb2f: lea eax, [ebp - 0xc] */ r_eax = (u32)(r_ebp+0xfffffff4u);
    /* 0055fb32: mov dword ptr fs:[0], eax */ W32((u32)(TEB), r_eax);
    /* 0055fb38: mov dword ptr [ebp - 0xb4], ecx */ W32((u32)(r_ebp+0xffffff4cu), r_ecx);
    /* 0055fb3e: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055fb44: mov dword ptr [eax], 0x6c96fc */ W32((u32)(r_eax), 0x6c96fcu);
    /* 0055fb4a: mov dword ptr [ebp - 4], 0 */ W32((u32)(r_ebp+0xfffffffcu), 0x0u);
    /* 0055fb51: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0055fb58: jmp 0x55fb63 */ goto L_0055fb63;
L_0055fb5a:; BB(0x0055fb5a);
    /* 0055fb5a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055fb5d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055fb60: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0055fb63:; BB(0x0055fb63);
    /* 0055fb63: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055fb67: jge 0x55fc26 */ if ((fS==fO)) goto L_0055fc26;
L_0055fb6d:; BB(0x0055fb6d);
    /* 0055fb6d: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055fb70: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055fb76: mov ecx, dword ptr [eax + edx*4 + 8] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8u));
    /* 0055fb7a: mov dword ptr [ebp - 0x18], ecx */ W32((u32)(r_ebp+0xffffffe8u), r_ecx);
    /* 0055fb7d: mov edx, dword ptr [ebp - 0x18] */ r_edx = R32((u32)(r_ebp+0xffffffe8u));
    /* 0055fb80: mov dword ptr [ebp - 0x14], edx */ W32((u32)(r_ebp+0xffffffecu), r_edx);
    /* 0055fb83: cmp dword ptr [ebp - 0x14], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffecu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fb87: je 0x55fb9f */ if (fZ) goto L_0055fb9f;
L_0055fb89:; BB(0x0055fb89);
    /* 0055fb89: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fb8b: mov eax, dword ptr [ebp - 0x14] */ r_eax = R32((u32)(r_ebp+0xffffffecu));
    /* 0055fb8e: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055fb90: mov ecx, dword ptr [ebp - 0x14] */ r_ecx = R32((u32)(r_ebp+0xffffffecu));
    /* 0055fb93: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0055fb95: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55fb97u); call_ind(t); }
    /* 0055fb97: mov dword ptr [ebp - 0xb8], eax */ W32((u32)(r_ebp+0xffffff48u), r_eax);
    /* 0055fb9d: jmp 0x55fba9 */ goto L_0055fba9;
L_0055fb9f:; BB(0x0055fb9f);
    /* 0055fb9f: mov dword ptr [ebp - 0xb8], 0 */ W32((u32)(r_ebp+0xffffff48u), 0x0u);
L_0055fba9:; BB(0x0055fba9);
    /* 0055fba9: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055fbac: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055fbb2: mov eax, dword ptr [edx + ecx*4 + 0x1c] */ r_eax = R32((u32)(r_edx+r_ecx*4+0x1cu));
    /* 0055fbb6: mov dword ptr [ebp - 0x20], eax */ W32((u32)(r_ebp+0xffffffe0u), r_eax);
    /* 0055fbb9: mov ecx, dword ptr [ebp - 0x20] */ r_ecx = R32((u32)(r_ebp+0xffffffe0u));
    /* 0055fbbc: mov dword ptr [ebp - 0x1c], ecx */ W32((u32)(r_ebp+0xffffffe4u), r_ecx);
    /* 0055fbbf: cmp dword ptr [ebp - 0x1c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffe4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fbc3: je 0x55fbdb */ if (fZ) goto L_0055fbdb;
L_0055fbc5:; BB(0x0055fbc5);
    /* 0055fbc5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fbc7: mov edx, dword ptr [ebp - 0x1c] */ r_edx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055fbca: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0055fbcc: mov ecx, dword ptr [ebp - 0x1c] */ r_ecx = R32((u32)(r_ebp+0xffffffe4u));
    /* 0055fbcf: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055fbd1: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x55fbd3u); call_ind(t); }
    /* 0055fbd3: mov dword ptr [ebp - 0xbc], eax */ W32((u32)(r_ebp+0xffffff44u), r_eax);
    /* 0055fbd9: jmp 0x55fbe5 */ goto L_0055fbe5;
L_0055fbdb:; BB(0x0055fbdb);
    /* 0055fbdb: mov dword ptr [ebp - 0xbc], 0 */ W32((u32)(r_ebp+0xffffff44u), 0x0u);
L_0055fbe5:; BB(0x0055fbe5);
    /* 0055fbe5: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055fbe8: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055fbee: mov edx, dword ptr [ecx + eax*4 + 0x4c] */ r_edx = R32((u32)(r_ecx+r_eax*4+0x4cu));
    /* 0055fbf2: mov dword ptr [ebp - 0x28], edx */ W32((u32)(r_ebp+0xffffffd8u), r_edx);
    /* 0055fbf5: mov eax, dword ptr [ebp - 0x28] */ r_eax = R32((u32)(r_ebp+0xffffffd8u));
    /* 0055fbf8: mov dword ptr [ebp - 0x24], eax */ W32((u32)(r_ebp+0xffffffdcu), r_eax);
    /* 0055fbfb: cmp dword ptr [ebp - 0x24], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffdcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fbff: je 0x55fc17 */ if (fZ) goto L_0055fc17;
L_0055fc01:; BB(0x0055fc01);
    /* 0055fc01: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fc03: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0055fc06: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055fc08: mov ecx, dword ptr [ebp - 0x24] */ r_ecx = R32((u32)(r_ebp+0xffffffdcu));
    /* 0055fc0b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0055fc0d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55fc0fu); call_ind(t); }
    /* 0055fc0f: mov dword ptr [ebp - 0xc0], eax */ W32((u32)(r_ebp+0xffffff40u), r_eax);
    /* 0055fc15: jmp 0x55fc21 */ goto L_0055fc21;
L_0055fc17:; BB(0x0055fc17);
    /* 0055fc17: mov dword ptr [ebp - 0xc0], 0 */ W32((u32)(r_ebp+0xffffff40u), 0x0u);
L_0055fc21:; BB(0x0055fc21);
    /* 0055fc21: jmp 0x55fb5a */ goto L_0055fb5a;
L_0055fc26:; BB(0x0055fc26);
    /* 0055fc26: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055fc2c: mov edx, dword ptr [ecx + 0xb8] */ r_edx = R32((u32)(r_ecx+0xb8u));
    /* 0055fc32: mov dword ptr [ebp - 0x30], edx */ W32((u32)(r_ebp+0xffffffd0u), r_edx);
    /* 0055fc35: mov eax, dword ptr [ebp - 0x30] */ r_eax = R32((u32)(r_ebp+0xffffffd0u));
    /* 0055fc38: mov dword ptr [ebp - 0x2c], eax */ W32((u32)(r_ebp+0xffffffd4u), r_eax);
    /* 0055fc3b: cmp dword ptr [ebp - 0x2c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffd4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fc3f: je 0x55fc57 */ if (fZ) goto L_0055fc57;
L_0055fc41:; BB(0x0055fc41);
    /* 0055fc41: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fc43: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0055fc46: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055fc48: mov ecx, dword ptr [ebp - 0x2c] */ r_ecx = R32((u32)(r_ebp+0xffffffd4u));
    /* 0055fc4b: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0055fc4d: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55fc4fu); call_ind(t); }
    /* 0055fc4f: mov dword ptr [ebp - 0xc4], eax */ W32((u32)(r_ebp+0xffffff3cu), r_eax);
    /* 0055fc55: jmp 0x55fc61 */ goto L_0055fc61;
L_0055fc57:; BB(0x0055fc57);
    /* 0055fc57: mov dword ptr [ebp - 0xc4], 0 */ W32((u32)(r_ebp+0xffffff3cu), 0x0u);
L_0055fc61:; BB(0x0055fc61);
    /* 0055fc61: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0055fc68: jmp 0x55fc73 */ goto L_0055fc73;
L_0055fc6a:; BB(0x0055fc6a);
    /* 0055fc6a: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055fc6d: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055fc70: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0055fc73:; BB(0x0055fc73);
    /* 0055fc73: cmp dword ptr [ebp - 0x10], 5 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x5u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055fc77: jge 0x55fcb7 */ if ((fS==fO)) goto L_0055fcb7;
L_0055fc79:; BB(0x0055fc79);
    /* 0055fc79: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055fc7c: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055fc82: mov ecx, dword ptr [eax + edx*4 + 0x60] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x60u));
    /* 0055fc86: mov dword ptr [ebp - 0x38], ecx */ W32((u32)(r_ebp+0xffffffc8u), r_ecx);
    /* 0055fc89: mov edx, dword ptr [ebp - 0x38] */ r_edx = R32((u32)(r_ebp+0xffffffc8u));
    /* 0055fc8c: mov dword ptr [ebp - 0x34], edx */ W32((u32)(r_ebp+0xffffffccu), r_edx);
    /* 0055fc8f: cmp dword ptr [ebp - 0x34], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffccu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fc93: je 0x55fcab */ if (fZ) goto L_0055fcab;
L_0055fc95:; BB(0x0055fc95);
    /* 0055fc95: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fc97: mov eax, dword ptr [ebp - 0x34] */ r_eax = R32((u32)(r_ebp+0xffffffccu));
    /* 0055fc9a: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055fc9c: mov ecx, dword ptr [ebp - 0x34] */ r_ecx = R32((u32)(r_ebp+0xffffffccu));
    /* 0055fc9f: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0055fca1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55fca3u); call_ind(t); }
    /* 0055fca3: mov dword ptr [ebp - 0xc8], eax */ W32((u32)(r_ebp+0xffffff38u), r_eax);
    /* 0055fca9: jmp 0x55fcb5 */ goto L_0055fcb5;
L_0055fcab:; BB(0x0055fcab);
    /* 0055fcab: mov dword ptr [ebp - 0xc8], 0 */ W32((u32)(r_ebp+0xffffff38u), 0x0u);
L_0055fcb5:; BB(0x0055fcb5);
    /* 0055fcb5: jmp 0x55fc6a */ goto L_0055fc6a;
L_0055fcb7:; BB(0x0055fcb7);
    /* 0055fcb7: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055fcbd: mov edx, dword ptr [ecx + 4] */ r_edx = R32((u32)(r_ecx+0x4u));
    /* 0055fcc0: mov dword ptr [ebp - 0x40], edx */ W32((u32)(r_ebp+0xffffffc0u), r_edx);
    /* 0055fcc3: mov eax, dword ptr [ebp - 0x40] */ r_eax = R32((u32)(r_ebp+0xffffffc0u));
    /* 0055fcc6: mov dword ptr [ebp - 0x3c], eax */ W32((u32)(r_ebp+0xffffffc4u), r_eax);
    /* 0055fcc9: cmp dword ptr [ebp - 0x3c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffc4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fccd: je 0x55fcf8 */ if (fZ) goto L_0055fcf8;
L_0055fccf:; BB(0x0055fccf);
    /* 0055fccf: mov ecx, dword ptr [ebp - 0x3c] */ r_ecx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0055fcd2: call 0x566720 */ r_esp -= 4; W32(r_esp, 0x55fcd7u); f_00566720();
    /* 0055fcd7: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0055fcdc: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0055fcdf: je 0x55fced */ if (fZ) goto L_0055fced;
L_0055fce1:; BB(0x0055fce1);
    /* 0055fce1: mov edx, dword ptr [ebp - 0x3c] */ r_edx = R32((u32)(r_ebp+0xffffffc4u));
    /* 0055fce4: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055fce5: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x55fceau); f_00686cae();
    /* 0055fcea: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0055fced:; BB(0x0055fced);
    /* 0055fced: mov eax, dword ptr [ebp - 0x3c] */ r_eax = R32((u32)(r_ebp+0xffffffc4u));
    /* 0055fcf0: mov dword ptr [ebp - 0xcc], eax */ W32((u32)(r_ebp+0xffffff34u), r_eax);
    /* 0055fcf6: jmp 0x55fd02 */ goto L_0055fd02;
L_0055fcf8:; BB(0x0055fcf8);
    /* 0055fcf8: mov dword ptr [ebp - 0xcc], 0 */ W32((u32)(r_ebp+0xffffff34u), 0x0u);
L_0055fd02:; BB(0x0055fd02);
    /* 0055fd02: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055fd08: mov edx, dword ptr [ecx + 0x74] */ r_edx = R32((u32)(r_ecx+0x74u));
    /* 0055fd0b: mov dword ptr [ebp - 0x48], edx */ W32((u32)(r_ebp+0xffffffb8u), r_edx);
    /* 0055fd0e: mov eax, dword ptr [ebp - 0x48] */ r_eax = R32((u32)(r_ebp+0xffffffb8u));
    /* 0055fd11: mov dword ptr [ebp - 0x44], eax */ W32((u32)(r_ebp+0xffffffbcu), r_eax);
    /* 0055fd14: cmp dword ptr [ebp - 0x44], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffbcu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fd18: je 0x55fd30 */ if (fZ) goto L_0055fd30;
L_0055fd1a:; BB(0x0055fd1a);
    /* 0055fd1a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fd1c: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0055fd1f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055fd21: mov ecx, dword ptr [ebp - 0x44] */ r_ecx = R32((u32)(r_ebp+0xffffffbcu));
    /* 0055fd24: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0055fd26: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55fd28u); call_ind(t); }
    /* 0055fd28: mov dword ptr [ebp - 0xd0], eax */ W32((u32)(r_ebp+0xffffff30u), r_eax);
    /* 0055fd2e: jmp 0x55fd3a */ goto L_0055fd3a;
L_0055fd30:; BB(0x0055fd30);
    /* 0055fd30: mov dword ptr [ebp - 0xd0], 0 */ W32((u32)(r_ebp+0xffffff30u), 0x0u);
L_0055fd3a:; BB(0x0055fd3a);
    /* 0055fd3a: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055fd40: mov edx, dword ptr [ecx + 0x78] */ r_edx = R32((u32)(r_ecx+0x78u));
    /* 0055fd43: mov dword ptr [ebp - 0x50], edx */ W32((u32)(r_ebp+0xffffffb0u), r_edx);
    /* 0055fd46: mov eax, dword ptr [ebp - 0x50] */ r_eax = R32((u32)(r_ebp+0xffffffb0u));
    /* 0055fd49: mov dword ptr [ebp - 0x4c], eax */ W32((u32)(r_ebp+0xffffffb4u), r_eax);
    /* 0055fd4c: cmp dword ptr [ebp - 0x4c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffb4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fd50: je 0x55fd68 */ if (fZ) goto L_0055fd68;
L_0055fd52:; BB(0x0055fd52);
    /* 0055fd52: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fd54: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0055fd57: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055fd59: mov ecx, dword ptr [ebp - 0x4c] */ r_ecx = R32((u32)(r_ebp+0xffffffb4u));
    /* 0055fd5c: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0055fd5e: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55fd60u); call_ind(t); }
    /* 0055fd60: mov dword ptr [ebp - 0xd4], eax */ W32((u32)(r_ebp+0xffffff2cu), r_eax);
    /* 0055fd66: jmp 0x55fd72 */ goto L_0055fd72;
L_0055fd68:; BB(0x0055fd68);
    /* 0055fd68: mov dword ptr [ebp - 0xd4], 0 */ W32((u32)(r_ebp+0xffffff2cu), 0x0u);
L_0055fd72:; BB(0x0055fd72);
    /* 0055fd72: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055fd78: mov edx, dword ptr [ecx + 0x7c] */ r_edx = R32((u32)(r_ecx+0x7cu));
    /* 0055fd7b: mov dword ptr [ebp - 0x58], edx */ W32((u32)(r_ebp+0xffffffa8u), r_edx);
    /* 0055fd7e: mov eax, dword ptr [ebp - 0x58] */ r_eax = R32((u32)(r_ebp+0xffffffa8u));
    /* 0055fd81: mov dword ptr [ebp - 0x54], eax */ W32((u32)(r_ebp+0xffffffacu), r_eax);
    /* 0055fd84: cmp dword ptr [ebp - 0x54], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffacu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fd88: je 0x55fda0 */ if (fZ) goto L_0055fda0;
L_0055fd8a:; BB(0x0055fd8a);
    /* 0055fd8a: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fd8c: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0055fd8f: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055fd91: mov ecx, dword ptr [ebp - 0x54] */ r_ecx = R32((u32)(r_ebp+0xffffffacu));
    /* 0055fd94: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0055fd96: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55fd98u); call_ind(t); }
    /* 0055fd98: mov dword ptr [ebp - 0xd8], eax */ W32((u32)(r_ebp+0xffffff28u), r_eax);
    /* 0055fd9e: jmp 0x55fdaa */ goto L_0055fdaa;
L_0055fda0:; BB(0x0055fda0);
    /* 0055fda0: mov dword ptr [ebp - 0xd8], 0 */ W32((u32)(r_ebp+0xffffff28u), 0x0u);
L_0055fdaa:; BB(0x0055fdaa);
    /* 0055fdaa: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055fdb0: mov edx, dword ptr [ecx + 0x80] */ r_edx = R32((u32)(r_ecx+0x80u));
    /* 0055fdb6: mov dword ptr [ebp - 0x60], edx */ W32((u32)(r_ebp+0xffffffa0u), r_edx);
    /* 0055fdb9: mov eax, dword ptr [ebp - 0x60] */ r_eax = R32((u32)(r_ebp+0xffffffa0u));
    /* 0055fdbc: mov dword ptr [ebp - 0x5c], eax */ W32((u32)(r_ebp+0xffffffa4u), r_eax);
    /* 0055fdbf: cmp dword ptr [ebp - 0x5c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffffa4u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fdc3: je 0x55fddb */ if (fZ) goto L_0055fddb;
L_0055fdc5:; BB(0x0055fdc5);
    /* 0055fdc5: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fdc7: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0055fdca: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055fdcc: mov ecx, dword ptr [ebp - 0x5c] */ r_ecx = R32((u32)(r_ebp+0xffffffa4u));
    /* 0055fdcf: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0055fdd1: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55fdd3u); call_ind(t); }
    /* 0055fdd3: mov dword ptr [ebp - 0xdc], eax */ W32((u32)(r_ebp+0xffffff24u), r_eax);
    /* 0055fdd9: jmp 0x55fde5 */ goto L_0055fde5;
L_0055fddb:; BB(0x0055fddb);
    /* 0055fddb: mov dword ptr [ebp - 0xdc], 0 */ W32((u32)(r_ebp+0xffffff24u), 0x0u);
L_0055fde5:; BB(0x0055fde5);
    /* 0055fde5: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055fdeb: mov edx, dword ptr [ecx + 0x84] */ r_edx = R32((u32)(r_ecx+0x84u));
    /* 0055fdf1: mov dword ptr [ebp - 0x68], edx */ W32((u32)(r_ebp+0xffffff98u), r_edx);
    /* 0055fdf4: mov eax, dword ptr [ebp - 0x68] */ r_eax = R32((u32)(r_ebp+0xffffff98u));
    /* 0055fdf7: mov dword ptr [ebp - 0x64], eax */ W32((u32)(r_ebp+0xffffff9cu), r_eax);
    /* 0055fdfa: cmp dword ptr [ebp - 0x64], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff9cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fdfe: je 0x55fe16 */ if (fZ) goto L_0055fe16;
L_0055fe00:; BB(0x0055fe00);
    /* 0055fe00: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fe02: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0055fe05: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055fe07: mov ecx, dword ptr [ebp - 0x64] */ r_ecx = R32((u32)(r_ebp+0xffffff9cu));
    /* 0055fe0a: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0055fe0c: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55fe0eu); call_ind(t); }
    /* 0055fe0e: mov dword ptr [ebp - 0xe0], eax */ W32((u32)(r_ebp+0xffffff20u), r_eax);
    /* 0055fe14: jmp 0x55fe20 */ goto L_0055fe20;
L_0055fe16:; BB(0x0055fe16);
    /* 0055fe16: mov dword ptr [ebp - 0xe0], 0 */ W32((u32)(r_ebp+0xffffff20u), 0x0u);
L_0055fe20:; BB(0x0055fe20);
    /* 0055fe20: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055fe26: mov edx, dword ptr [ecx + 0x88] */ r_edx = R32((u32)(r_ecx+0x88u));
    /* 0055fe2c: mov dword ptr [ebp - 0x70], edx */ W32((u32)(r_ebp+0xffffff90u), r_edx);
    /* 0055fe2f: mov eax, dword ptr [ebp - 0x70] */ r_eax = R32((u32)(r_ebp+0xffffff90u));
    /* 0055fe32: mov dword ptr [ebp - 0x6c], eax */ W32((u32)(r_ebp+0xffffff94u), r_eax);
    /* 0055fe35: cmp dword ptr [ebp - 0x6c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff94u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fe39: je 0x55fe51 */ if (fZ) goto L_0055fe51;
L_0055fe3b:; BB(0x0055fe3b);
    /* 0055fe3b: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fe3d: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0055fe40: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 0055fe42: mov ecx, dword ptr [ebp - 0x6c] */ r_ecx = R32((u32)(r_ebp+0xffffff94u));
    /* 0055fe45: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0055fe47: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55fe49u); call_ind(t); }
    /* 0055fe49: mov dword ptr [ebp - 0xe4], eax */ W32((u32)(r_ebp+0xffffff1cu), r_eax);
    /* 0055fe4f: jmp 0x55fe5b */ goto L_0055fe5b;
L_0055fe51:; BB(0x0055fe51);
    /* 0055fe51: mov dword ptr [ebp - 0xe4], 0 */ W32((u32)(r_ebp+0xffffff1cu), 0x0u);
L_0055fe5b:; BB(0x0055fe5b);
    /* 0055fe5b: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0055fe62: jmp 0x55fe6d */ goto L_0055fe6d;
L_0055fe64:; BB(0x0055fe64);
    /* 0055fe64: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055fe67: add ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_ecx = r;  }
    /* 0055fe6a: mov dword ptr [ebp - 0x10], ecx */ W32((u32)(r_ebp+0xfffffff0u), r_ecx);
L_0055fe6d:; BB(0x0055fe6d);
    /* 0055fe6d: cmp dword ptr [ebp - 0x10], 0xb */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0xbu; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055fe71: jge 0x55fec7 */ if ((fS==fO)) goto L_0055fec7;
L_0055fe73:; BB(0x0055fe73);
    /* 0055fe73: mov edx, dword ptr [ebp - 0x10] */ r_edx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055fe76: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055fe7c: mov ecx, dword ptr [eax + edx*4 + 0x8c] */ r_ecx = R32((u32)(r_eax+r_edx*4+0x8cu));
    /* 0055fe83: mov dword ptr [ebp - 0x78], ecx */ W32((u32)(r_ebp+0xffffff88u), r_ecx);
    /* 0055fe86: mov edx, dword ptr [ebp - 0x78] */ r_edx = R32((u32)(r_ebp+0xffffff88u));
    /* 0055fe89: mov dword ptr [ebp - 0x74], edx */ W32((u32)(r_ebp+0xffffff8cu), r_edx);
    /* 0055fe8c: cmp dword ptr [ebp - 0x74], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff8cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fe90: je 0x55febb */ if (fZ) goto L_0055febb;
L_0055fe92:; BB(0x0055fe92);
    /* 0055fe92: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0055fe95: call 0x562b10 */ r_esp -= 4; W32(r_esp, 0x55fe9au); f_00562b10();
    /* 0055fe9a: mov eax, 1 */ r_eax = 0x1u;
    /* 0055fe9f: and eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_eax = r; fZ = (r == 0); }
    /* 0055fea2: je 0x55feb0 */ if (fZ) goto L_0055feb0;
L_0055fea4:; BB(0x0055fea4);
    /* 0055fea4: mov ecx, dword ptr [ebp - 0x74] */ r_ecx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0055fea7: push ecx */ { u32 v = r_ecx; r_esp -= 4; W32(r_esp, v); }
    /* 0055fea8: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x55feadu); f_00686cae();
    /* 0055fead: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0055feb0:; BB(0x0055feb0);
    /* 0055feb0: mov edx, dword ptr [ebp - 0x74] */ r_edx = R32((u32)(r_ebp+0xffffff8cu));
    /* 0055feb3: mov dword ptr [ebp - 0xe8], edx */ W32((u32)(r_ebp+0xffffff18u), r_edx);
    /* 0055feb9: jmp 0x55fec5 */ goto L_0055fec5;
L_0055febb:; BB(0x0055febb);
    /* 0055febb: mov dword ptr [ebp - 0xe8], 0 */ W32((u32)(r_ebp+0xffffff18u), 0x0u);
L_0055fec5:; BB(0x0055fec5);
    /* 0055fec5: jmp 0x55fe64 */ goto L_0055fe64;
L_0055fec7:; BB(0x0055fec7);
    /* 0055fec7: mov dword ptr [ebp - 0x10], 0 */ W32((u32)(r_ebp+0xfffffff0u), 0x0u);
    /* 0055fece: jmp 0x55fed9 */ goto L_0055fed9;
L_0055fed0:; BB(0x0055fed0);
    /* 0055fed0: mov eax, dword ptr [ebp - 0x10] */ r_eax = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055fed3: add eax, 1 */ {  u32 a = r_eax; u32 b = 0x1u; u32 r = (a + b) & 0xffffffffu; r_eax = r;  }
    /* 0055fed6: mov dword ptr [ebp - 0x10], eax */ W32((u32)(r_ebp+0xfffffff0u), r_eax);
L_0055fed9:; BB(0x0055fed9);
    /* 0055fed9: cmp dword ptr [ebp - 0x10], 3 */ {  u32 a = R32((u32)(r_ebp+0xfffffff0u)); u32 b = 0x3u; u32 r = (a - b) & 0xffffffffu;  fS = ((r >> 31) & 1); fO = (((a ^ b) & (a ^ r)) >> 31) & 1; }
    /* 0055fedd: jge 0x55ff20 */ if ((fS==fO)) goto L_0055ff20;
L_0055fedf:; BB(0x0055fedf);
    /* 0055fedf: mov ecx, dword ptr [ebp - 0x10] */ r_ecx = R32((u32)(r_ebp+0xfffffff0u));
    /* 0055fee2: mov edx, dword ptr [ebp - 0xb4] */ r_edx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055fee8: mov eax, dword ptr [edx + ecx*4 + 0xbc] */ r_eax = R32((u32)(r_edx+r_ecx*4+0xbcu));
    /* 0055feef: mov dword ptr [ebp - 0x80], eax */ W32((u32)(r_ebp+0xffffff80u), r_eax);
    /* 0055fef2: mov ecx, dword ptr [ebp - 0x80] */ r_ecx = R32((u32)(r_ebp+0xffffff80u));
    /* 0055fef5: mov dword ptr [ebp - 0x7c], ecx */ W32((u32)(r_ebp+0xffffff84u), r_ecx);
    /* 0055fef8: cmp dword ptr [ebp - 0x7c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff84u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fefc: je 0x55ff14 */ if (fZ) goto L_0055ff14;
L_0055fefe:; BB(0x0055fefe);
    /* 0055fefe: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ff00: mov edx, dword ptr [ebp - 0x7c] */ r_edx = R32((u32)(r_ebp+0xffffff84u));
    /* 0055ff03: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0055ff05: mov ecx, dword ptr [ebp - 0x7c] */ r_ecx = R32((u32)(r_ebp+0xffffff84u));
    /* 0055ff08: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055ff0a: call edx */ { u32 t = r_edx; r_esp -= 4; W32(r_esp, 0x55ff0cu); call_ind(t); }
    /* 0055ff0c: mov dword ptr [ebp - 0xec], eax */ W32((u32)(r_ebp+0xffffff14u), r_eax);
    /* 0055ff12: jmp 0x55ff1e */ goto L_0055ff1e;
L_0055ff14:; BB(0x0055ff14);
    /* 0055ff14: mov dword ptr [ebp - 0xec], 0 */ W32((u32)(r_ebp+0xffffff14u), 0x0u);
L_0055ff1e:; BB(0x0055ff1e);
    /* 0055ff1e: jmp 0x55fed0 */ goto L_0055fed0;
L_0055ff20:; BB(0x0055ff20);
    /* 0055ff20: mov eax, dword ptr [ebp - 0xb4] */ r_eax = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055ff26: mov ecx, dword ptr [eax + 0xc8] */ r_ecx = R32((u32)(r_eax+0xc8u));
    /* 0055ff2c: mov dword ptr [ebp - 0x88], ecx */ W32((u32)(r_ebp+0xffffff78u), r_ecx);
    /* 0055ff32: mov edx, dword ptr [ebp - 0x88] */ r_edx = R32((u32)(r_ebp+0xffffff78u));
    /* 0055ff38: mov dword ptr [ebp - 0x84], edx */ W32((u32)(r_ebp+0xffffff7cu), r_edx);
    /* 0055ff3e: cmp dword ptr [ebp - 0x84], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff7cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ff45: je 0x55ff63 */ if (fZ) goto L_0055ff63;
L_0055ff47:; BB(0x0055ff47);
    /* 0055ff47: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055ff49: mov eax, dword ptr [ebp - 0x84] */ r_eax = R32((u32)(r_ebp+0xffffff7cu));
    /* 0055ff4f: mov edx, dword ptr [eax] */ r_edx = R32((u32)(r_eax));
    /* 0055ff51: mov ecx, dword ptr [ebp - 0x84] */ r_ecx = R32((u32)(r_ebp+0xffffff7cu));
    /* 0055ff57: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 0055ff59: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x55ff5bu); call_ind(t); }
    /* 0055ff5b: mov dword ptr [ebp - 0xf0], eax */ W32((u32)(r_ebp+0xffffff10u), r_eax);
    /* 0055ff61: jmp 0x55ff6d */ goto L_0055ff6d;
L_0055ff63:; BB(0x0055ff63);
    /* 0055ff63: mov dword ptr [ebp - 0xf0], 0 */ W32((u32)(r_ebp+0xffffff10u), 0x0u);
L_0055ff6d:; BB(0x0055ff6d);
    /* 0055ff6d: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055ff73: mov edx, dword ptr [ecx + 0xcc] */ r_edx = R32((u32)(r_ecx+0xccu));
    /* 0055ff79: mov dword ptr [ebp - 0x90], edx */ W32((u32)(r_ebp+0xffffff70u), r_edx);
    /* 0055ff7f: mov eax, dword ptr [ebp - 0x90] */ r_eax = R32((u32)(r_ebp+0xffffff70u));
    /* 0055ff85: mov dword ptr [ebp - 0x8c], eax */ W32((u32)(r_ebp+0xffffff74u), r_eax);
    /* 0055ff8b: cmp dword ptr [ebp - 0x8c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff74u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055ff92: je 0x55ffc6 */ if (fZ) goto L_0055ffc6;
L_0055ff94:; BB(0x0055ff94);
    /* 0055ff94: mov ecx, dword ptr [ebp - 0x8c] */ r_ecx = R32((u32)(r_ebp+0xffffff74u));
    /* 0055ff9a: call 0x565630 */ r_esp -= 4; W32(r_esp, 0x55ff9fu); f_00565630();
    /* 0055ff9f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 0055ffa4: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 0055ffa7: je 0x55ffb8 */ if (fZ) goto L_0055ffb8;
L_0055ffa9:; BB(0x0055ffa9);
    /* 0055ffa9: mov edx, dword ptr [ebp - 0x8c] */ r_edx = R32((u32)(r_ebp+0xffffff74u));
    /* 0055ffaf: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 0055ffb0: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x55ffb5u); f_00686cae();
    /* 0055ffb5: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_0055ffb8:; BB(0x0055ffb8);
    /* 0055ffb8: mov eax, dword ptr [ebp - 0x8c] */ r_eax = R32((u32)(r_ebp+0xffffff74u));
    /* 0055ffbe: mov dword ptr [ebp - 0xf4], eax */ W32((u32)(r_ebp+0xffffff0cu), r_eax);
    /* 0055ffc4: jmp 0x55ffd0 */ goto L_0055ffd0;
L_0055ffc6:; BB(0x0055ffc6);
    /* 0055ffc6: mov dword ptr [ebp - 0xf4], 0 */ W32((u32)(r_ebp+0xffffff0cu), 0x0u);
L_0055ffd0:; BB(0x0055ffd0);
    /* 0055ffd0: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0055ffd6: mov edx, dword ptr [ecx + 0xd0] */ r_edx = R32((u32)(r_ecx+0xd0u));
    /* 0055ffdc: mov dword ptr [ebp - 0x98], edx */ W32((u32)(r_ebp+0xffffff68u), r_edx);
    /* 0055ffe2: mov eax, dword ptr [ebp - 0x98] */ r_eax = R32((u32)(r_ebp+0xffffff68u));
    /* 0055ffe8: mov dword ptr [ebp - 0x94], eax */ W32((u32)(r_ebp+0xffffff6cu), r_eax);
    /* 0055ffee: cmp dword ptr [ebp - 0x94], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff6cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 0055fff5: je 0x560013 */ if (fZ) goto L_00560013;
L_0055fff7:; BB(0x0055fff7);
    /* 0055fff7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 0055fff9: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 0055ffff: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 00560001: mov ecx, dword ptr [ebp - 0x94] */ r_ecx = R32((u32)(r_ebp+0xffffff6cu));
    /* 00560007: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 00560009: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x56000bu); call_ind(t); }
    /* 0056000b: mov dword ptr [ebp - 0xf8], eax */ W32((u32)(r_ebp+0xffffff08u), r_eax);
    /* 00560011: jmp 0x56001d */ goto L_0056001d;
L_00560013:; BB(0x00560013);
    /* 00560013: mov dword ptr [ebp - 0xf8], 0 */ W32((u32)(r_ebp+0xffffff08u), 0x0u);
L_0056001d:; BB(0x0056001d);
    /* 0056001d: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00560023: mov edx, dword ptr [ecx + 0xd4] */ r_edx = R32((u32)(r_ecx+0xd4u));
    /* 00560029: mov dword ptr [ebp - 0xa0], edx */ W32((u32)(r_ebp+0xffffff60u), r_edx);
    /* 0056002f: mov eax, dword ptr [ebp - 0xa0] */ r_eax = R32((u32)(r_ebp+0xffffff60u));
    /* 00560035: mov dword ptr [ebp - 0x9c], eax */ W32((u32)(r_ebp+0xffffff64u), r_eax);
    /* 0056003b: cmp dword ptr [ebp - 0x9c], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff64u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 00560042: je 0x560076 */ if (fZ) goto L_00560076;
L_00560044:; BB(0x00560044);
    /* 00560044: mov ecx, dword ptr [ebp - 0x9c] */ r_ecx = R32((u32)(r_ebp+0xffffff64u));
    /* 0056004a: call 0x565630 */ r_esp -= 4; W32(r_esp, 0x56004fu); f_00565630();
    /* 0056004f: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00560054: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00560057: je 0x560068 */ if (fZ) goto L_00560068;
L_00560059:; BB(0x00560059);
    /* 00560059: mov edx, dword ptr [ebp - 0x9c] */ r_edx = R32((u32)(r_ebp+0xffffff64u));
    /* 0056005f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00560060: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x560065u); f_00686cae();
    /* 00560065: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00560068:; BB(0x00560068);
    /* 00560068: mov eax, dword ptr [ebp - 0x9c] */ r_eax = R32((u32)(r_ebp+0xffffff64u));
    /* 0056006e: mov dword ptr [ebp - 0xfc], eax */ W32((u32)(r_ebp+0xffffff04u), r_eax);
    /* 00560074: jmp 0x560080 */ goto L_00560080;
L_00560076:; BB(0x00560076);
    /* 00560076: mov dword ptr [ebp - 0xfc], 0 */ W32((u32)(r_ebp+0xffffff04u), 0x0u);
L_00560080:; BB(0x00560080);
    /* 00560080: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 00560086: mov edx, dword ptr [ecx + 0xd8] */ r_edx = R32((u32)(r_ecx+0xd8u));
    /* 0056008c: mov dword ptr [ebp - 0xa8], edx */ W32((u32)(r_ebp+0xffffff58u), r_edx);
    /* 00560092: mov eax, dword ptr [ebp - 0xa8] */ r_eax = R32((u32)(r_ebp+0xffffff58u));
    /* 00560098: mov dword ptr [ebp - 0xa4], eax */ W32((u32)(r_ebp+0xffffff5cu), r_eax);
    /* 0056009e: cmp dword ptr [ebp - 0xa4], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff5cu)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005600a5: je 0x5600c3 */ if (fZ) goto L_005600c3;
L_005600a7:; BB(0x005600a7);
    /* 005600a7: push 1 */ { u32 v = 0x1u; r_esp -= 4; W32(r_esp, v); }
    /* 005600a9: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005600af: mov edx, dword ptr [ecx] */ r_edx = R32((u32)(r_ecx));
    /* 005600b1: mov ecx, dword ptr [ebp - 0xa4] */ r_ecx = R32((u32)(r_ebp+0xffffff5cu));
    /* 005600b7: mov eax, dword ptr [edx] */ r_eax = R32((u32)(r_edx));
    /* 005600b9: call eax */ { u32 t = r_eax; r_esp -= 4; W32(r_esp, 0x5600bbu); call_ind(t); }
    /* 005600bb: mov dword ptr [ebp - 0x100], eax */ W32((u32)(r_ebp+0xffffff00u), r_eax);
    /* 005600c1: jmp 0x5600cd */ goto L_005600cd;
L_005600c3:; BB(0x005600c3);
    /* 005600c3: mov dword ptr [ebp - 0x100], 0 */ W32((u32)(r_ebp+0xffffff00u), 0x0u);
L_005600cd:; BB(0x005600cd);
    /* 005600cd: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 005600d3: mov edx, dword ptr [ecx + 0xdc] */ r_edx = R32((u32)(r_ecx+0xdcu));
    /* 005600d9: mov dword ptr [ebp - 0xb0], edx */ W32((u32)(r_ebp+0xffffff50u), r_edx);
    /* 005600df: mov eax, dword ptr [ebp - 0xb0] */ r_eax = R32((u32)(r_ebp+0xffffff50u));
    /* 005600e5: mov dword ptr [ebp - 0xac], eax */ W32((u32)(r_ebp+0xffffff54u), r_eax);
    /* 005600eb: cmp dword ptr [ebp - 0xac], 0 */ {  u32 a = R32((u32)(r_ebp+0xffffff54u)); u32 b = 0x0u; u32 r = (a - b) & 0xffffffffu;  fZ = (r == 0); }
    /* 005600f2: je 0x560126 */ if (fZ) goto L_00560126;
L_005600f4:; BB(0x005600f4);
    /* 005600f4: mov ecx, dword ptr [ebp - 0xac] */ r_ecx = R32((u32)(r_ebp+0xffffff54u));
    /* 005600fa: call 0x565630 */ r_esp -= 4; W32(r_esp, 0x5600ffu); f_00565630();
    /* 005600ff: mov ecx, 1 */ r_ecx = 0x1u;
    /* 00560104: and ecx, 1 */ {  u32 a = r_ecx; u32 b = 0x1u; u32 r = (a & b) & 0xffffffffu; r_ecx = r; fZ = (r == 0); }
    /* 00560107: je 0x560118 */ if (fZ) goto L_00560118;
L_00560109:; BB(0x00560109);
    /* 00560109: mov edx, dword ptr [ebp - 0xac] */ r_edx = R32((u32)(r_ebp+0xffffff54u));
    /* 0056010f: push edx */ { u32 v = r_edx; r_esp -= 4; W32(r_esp, v); }
    /* 00560110: call 0x686cae */ r_esp -= 4; W32(r_esp, 0x560115u); f_00686cae();
    /* 00560115: add esp, 4 */ {  u32 a = r_esp; u32 b = 0x4u; u32 r = (a + b) & 0xffffffffu; r_esp = r;  }
L_00560118:; BB(0x00560118);
    /* 00560118: mov eax, dword ptr [ebp - 0xac] */ r_eax = R32((u32)(r_ebp+0xffffff54u));
    /* 0056011e: mov dword ptr [ebp - 0x104], eax */ W32((u32)(r_ebp+0xfffffefcu), r_eax);
    /* 00560124: jmp 0x560130 */ goto L_00560130;
L_00560126:; BB(0x00560126);
    /* 00560126: mov dword ptr [ebp - 0x104], 0 */ W32((u32)(r_ebp+0xfffffefcu), 0x0u);
L_00560130:; BB(0x00560130);
    /* 00560130: mov dword ptr [ebp - 4], 0xffffffff */ W32((u32)(r_ebp+0xfffffffcu), 0xffffffffu);
    /* 00560137: mov ecx, dword ptr [ebp - 0xb4] */ r_ecx = R32((u32)(r_ebp+0xffffff4cu));
    /* 0056013d: call 0x5e9e40 */ r_esp -= 4; W32(r_esp, 0x560142u); f_005e9e40();
    /* 00560142: mov ecx, dword ptr [ebp - 0xc] */ r_ecx = R32((u32)(r_ebp+0xfffffff4u));
    /* 00560145: mov dword ptr fs:[0], ecx */ W32((u32)(TEB), r_ecx);
    /* 0056014c: pop ecx */ { u32 v = R32(r_esp); r_esp += 4; r_ecx = v; }
    /* 0056014d: mov esp, ebp */ r_esp = r_ebp;
    /* 0056014f: pop ebp */ { u32 v = R32(r_esp); r_esp += 4; r_ebp = v; }
    /* 00560150: ret  */ FN_RET(0x0055fb10); r_esp += 4; return;
}

